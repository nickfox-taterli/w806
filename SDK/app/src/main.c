
#include <stdio.h>
#include "wm_hal.h"

extern core_main(void);

int main(void)
{
	SystemClock_Config(CPU_CLK_240M);
	HAL_Init();
	core_main();
	
	while (1)
	{
		HAL_Delay(1000);
	}
}