#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/DC Motor/DC_Interface.h"
#include "util/delay.h"

int main (void)
{
	DC_U8Init();

	while (1)
	{
		DC_U8RotateClockWise();
		_delay_ms(2000);
		DC_U8StopRotation();
		_delay_ms(2000);
		DC_U8RotateAntiClockWise();
		_delay_ms(2000);
	}

	return 0;
}
