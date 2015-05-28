#include "lib/stm32f0xx.h"
#include "lib/system_stm32f0xx.h"
#include "gpio/gpio.h"
#include "delay/delay.h"
#include "stm32f0-discovery.h"
#include "lcd3310/lcd3310.h"

int main( void )
{
    SystemInit();
    delay_init( 48 );
    lcd3310_init();
    lcd3310_string( "tekst", 0 , 0 );
    lcd3310_value_float( 3.14, 0, 1 );
    lcd3310_value_integer( 3255, 0, 2 );

    for(;;)
    {
	///новое измеение 28.05/

    }

	return 0;
}

