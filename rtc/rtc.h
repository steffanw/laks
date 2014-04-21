#pragma once

#include <stdint.h>
#include <time.h>

#include <os/thread.h>


struct RTC_reg_t{
	volatile uint32_t TR;
	volatile uint32_t DR;
	volatile uint32_t CR;
	volatile uint32_t ISR;
	volatile uint32_t PRER;
	volatile uint32_t WUTR;
	volatile uint32_t CALIBR;
	volatile uint32_t ALRMAR;
	volatile uint32_t ALRMBR;
	volatile uint32_t WPR;
	volatile uint32_t SSR;
	volatile uint32_t SHIFTR;
	volatile uint32_t TSDR;
	volatile uint32_t TSSSR;
	volatile uint32_t CALR;
	volatile uint32_t TAFCR;
	volatile uint32_t ALRMASSR;
	volatile uint32_t ALRMBSSR;
	volatile uint32_t BKKR[32];
};

class RTC_t {

	public:
		RTC_reg_t& reg;
		
		RTC_t(uint32_t reg_addr) : reg(*(RTC_reg_t*)reg_addr) {}


		void unlock(){
			reg.WPR = 0xCA;
    		reg.WPR = 0x53;
		}

		void lock(){
			reg.WPR = 0x00;
		}

		void set_prescaler(uint16_t sync, uint8_t async){
		    reg.PRER  =  (sync & 0x1FFF);
		    reg.PRER |= (((uint32_t)(async & 0x7F)) << 16);
		}

		void start(){
			reg.ISR &= ~RTC_ISR_INIT;
		}

		void set_date(uint8_t year, uint8_t month, uint8_t day,  uint8_t day_of_week){

		    reg.DR = (  
					((year / 10) << 20) |
					((year % 10) << 16) |
					((day_of_week) << 13) |
					((month / 10) << 12) |
					((month %  10) << 8) |
					((day / 10) << 4) |
					((day % 10) << 0)
		            );
		}

		void set_time(uint8_t notation, uint8_t hours, uint8_t minutes, uint8_t seconds){
    		reg.TR = (  
					(notation << 22) |
					((hours / 10) << 20) |
					((hours % 10) << 16) |
					((minutes / 10) << 12) |
					((minutes %  10) << 8) |
					((seconds / 10) << 4) |
					((seconds % 10) << 0)
            );
        }

        void set_timestamp(time_t time){
		    struct tm *ti = localtime(&time);
		    set_time(1, ti->tm_hour, ti->tm_min, ti->tm_sec);
		    //TODO: FIX DAY OF WEEK
		    set_date(ti->tm_year-100, ti->tm_mon, ti->tm_mday, ti->tm_wday);
		}

		time_t get_timestamp(){

		    uint32_t tr = reg.TR;
		    uint32_t dr = reg.DR;

		    struct tm rtc_time;

		    rtc_time.tm_year = ((dr >> 20) & 0x0F) * 10 + ((dr >> 16) & 0x0F)  + 100;
		    rtc_time.tm_mday = ((dr >> 4) & 0x3) * 10 + ((dr >> 0) & 0xF);
		    rtc_time.tm_hour = ((tr >> 20) & 0x3) * 10 + ((tr >> 16) & 0xF);
		    rtc_time.tm_min = ((tr >> 12) & 0x7) * 10 + ((tr >> 8) & 0xF);
		    rtc_time.tm_sec = ((tr >> 4) & 0x7) * 10 + ((tr >> 0) & 0xF);

		    time_t time1 = mktime(&rtc_time);
		    return time1;
		}

		void wait_for_synchronization(){
   		 	while(!(reg.ISR & RTC_ISR_INITF)){
   		 		Thread::yield();
   		 	}
   		}
		
};

#if defined(STM32L1)
	static RTC_t RTC(0x40002800);
#endif