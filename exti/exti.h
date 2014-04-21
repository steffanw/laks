#pragma once


struct EXTI_reg_t{
	volatile uint32_t IMR;
	volatile uint32_t EMR;
	volatile uint32_t RTSR;
	volatile uint32_t FTSR;
	volatile uint32_t SWIER;
	volatile uint32_t PR;
};

class EXTI_t{

	public:
		EXTI_reg_t &reg;

		enum Mask{
			Interrupt,
			Event
		};

		enum Edge{
			Falling,
			Rising,
			Both
		};

		class Channel{

			private:
				const EXTI_t &e;
				int n;

			public:
				constexpr Channel(const EXTI_t &exti, const int channel): e(exti), n(channel) {}
			

				void setup(Edge e, Mask m){
					select_edge(e);
					mask(m);
				}

				void mask(Mask mask){
					if(mask == Mask::Interrupt){
						e.reg.IMR |= (1 << n);
					} else {
						e.reg.EMR |= (1 << n);
					}
				}

				void select_edge(Edge edge){
					if(edge == Edge::Falling){
						e.reg.FTSR |= (1 << n);
					} else if(edge == Edge::Rising) {
						e.reg.RTSR |= (1 << n);
					} else {
						e.reg.RTSR |= (1 << n);
						e.reg.FTSR |= (1 << n);
					}
				}

				void clear_pending(){
					e.reg.PR |= (1 << n);
				}

				bool is_pending(){
					return e.reg.PR & n;
				}


				void trigger(){
					e.reg.SWIER |= (1 << n);
				}
		};

		constexpr EXTI_t(uint32_t reg_addr) : reg(*(EXTI_reg_t*)reg_addr) {}


		constexpr Channel operator[](int channel){
			return Channel(*this, channel);
		}

};


#if defined(STM32L1)
static EXTI_t EXTI(0x40010400);
#endif


