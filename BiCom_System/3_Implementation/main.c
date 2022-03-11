/*Start by Ambika Sonnad(99007677) , work - driver , counter
           Rohankumar Hubballi(99007674), work - encryption
           Koushika B(99007675), work - delay
*/

#include "MyStm32f407xx.h"

#define BTN_PRESSED  ENABLE
#define en1 30

#define DELAY_COUNT_1MS 		 1250U
#define DELAY_COUNT_1S  		(1000U * DELAY_COUNT_1MS)
#define DELAY_COUNT_500MS  		(500U  * DELAY_COUNT_1MS)
#define DELAY_COUNT_250MS 		(250U  * DELAY_COUNT_1MS)
#define DELAY_COUNT_125MS 		(125U  * DELAY_COUNT_1MS)

int wnd_status(void);
int alr_status(void);
int battery_info(void);
int door_status(void);
void led_on(uint8_t led_no);
void led_off(uint8_t led_no);
void btn_init(void);
int count(void);
int encryption(int data);

void delay (uint32_t count)                                        //delay function
{
	for (uint32_t i=0; i<count; i++);
}
int count(void)                                                   //counter function to count the blue switch
{
	btn_init();
	int ctr = 0;
	int tmr = 50000;
	while(tmr--)
	{
		if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
		{
			delay(1000);
			ctr++;
			if (ctr > 4)
				ctr = 0;
		}
	}
	return ctr;
}

int main(void)
{
	GPIO_Handle_t Gpioled, Gpiobtn;

	Gpioled.pGPIOx = GPIOD;
	Gpioled.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;                                            // Green led
	Gpioled.GPIO_PinConfig.GPIO_PinMode   = GPIO_MODE_OUT;
	Gpioled.GPIO_PinConfig.GPIO_PinSpeed  = GPIO_SPEED_FAST;
	Gpioled.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&Gpioled);

	Gpioled.pGPIOx = GPIOD;
	Gpioled.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;                                                  // orange led
	Gpioled.GPIO_PinConfig.GPIO_PinMode   = GPIO_MODE_OUT;
	Gpioled.GPIO_PinConfig.GPIO_PinSpeed  = GPIO_SPEED_FAST;
	Gpioled.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&Gpioled);

	Gpioled.pGPIOx = GPIOD;
	Gpioled.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;                                                  // red led
	Gpioled.GPIO_PinConfig.GPIO_PinMode   = GPIO_MODE_OUT;
	Gpioled.GPIO_PinConfig.GPIO_PinSpeed  = GPIO_SPEED_FAST;
	Gpioled.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&Gpioled);

	Gpioled.pGPIOx = GPIOD;
	Gpioled.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;                                                       // Blue led
	Gpioled.GPIO_PinConfig.GPIO_PinMode   = GPIO_MODE_OUT;
	Gpioled.GPIO_PinConfig.GPIO_PinSpeed  = GPIO_SPEED_FAST;
	Gpioled.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&Gpioled);

	Gpiobtn.pGPIOx = GPIOA;
	Gpiobtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;                                                         // switch
	Gpiobtn.GPIO_PinConfig.GPIO_PinMode   = GPIO_MODE_IN;
	Gpiobtn.GPIO_PinConfig.GPIO_PinSpeed  = GPIO_SPEED_FAST;
	Gpiobtn.GPIO_PinConfig.GPIO_PinOPType = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_Init(&Gpiobtn);

	while(1)                                                        
		{
			int counter;
			counter = count();                                    // counter function call
			int E = encryption((counter));                        // checking the encryption
			if(counter == 1 &&  E == 20)
			{
				wnd_status();
				counter = 0;

			}
			else if (counter == 2 &&  E == 20)
			{
				alr_status();
				counter = 0;
			}
			else if (counter == 3 &&  E == 20)
			{
				battery_info();
				counter = 0;

			}
			else if(counter == 4 &&  E == 20)
			{
				door_status();
				counter = 0;
			}
		   }
}

int wnd_status(void)                                                                   //window status function to on all leds
{
				led_on(GPIO_PIN_NO_12);
				led_on(GPIO_PIN_NO_13);
				led_on(GPIO_PIN_NO_14);
				led_on(GPIO_PIN_NO_15);
				delay(500000);
}

int alr_status(void)                                                                //alarm status function to off all leds
{
				led_off(GPIO_PIN_NO_12);
				led_off(GPIO_PIN_NO_13);
				led_off(GPIO_PIN_NO_14);
				led_off(GPIO_PIN_NO_15);
				delay(500000);
}

int battery_info(void)                                                           //car battery information function to on all leds in clockwise direction
{
	led_on(GPIO_PIN_NO_12);
	delay(500000);
	led_off(GPIO_PIN_NO_12);
	led_on(GPIO_PIN_NO_13);
	delay(500000);
	led_off(GPIO_PIN_NO_13);
	led_on(GPIO_PIN_NO_14);
	delay(500000);
	led_off(GPIO_PIN_NO_14);
	led_on(GPIO_PIN_NO_15);
	delay(500000);
	led_off(GPIO_PIN_NO_15);
}

int door_status(void)                                                                          //door status function to on all leds in anti-clockwise direction
{
	led_on(GPIO_PIN_NO_12);
	delay(500000);
	led_off(GPIO_PIN_NO_12);
	led_on(GPIO_PIN_NO_15);
	delay(500000);
	led_off(GPIO_PIN_NO_15);
	led_on(GPIO_PIN_NO_14);
	delay(500000);
	led_off(GPIO_PIN_NO_14);
	led_on(GPIO_PIN_NO_13);
	delay(500000);
	led_off(GPIO_PIN_NO_13);
}



void btn_init(void)                                                                    //switch button initialization  function
{
		uint32_t *pRccAhb1enr = (uint32_t*)0x40023830;
		*pRccAhb1enr |=(1<<0);
		uint32_t *pGpiodModeReg = (uint32_t*)0x4002000C;
		*pRccAhb1enr |=(1<<1);
}

void led_on(uint8_t led_no)                                                                //led on function
{
  uint32_t *pGpiodDataReg = (uint32_t*)0x40020C14;
  *pGpiodDataReg |= ( 1 << led_no);
}

void led_off(uint8_t led_no)                                                                    //led off function
{
	  uint32_t *pGpiodDataReg = (uint32_t*)0x40020C14;
	  *pGpiodDataReg &= ~( 1 << led_no);
}

int  encryption(int data)                                                                      //encryption
{
	if( data == en1)
	{
		int d = 10 + 20;
		return d;
	}
}




