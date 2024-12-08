#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

int main(void)
{
	float Grade;
		
	switch(Grade <= 12.0)
	{
		case 1: printf("very bad"); break;
		case 0: switch(Grade < 14.0 && Grade >= 12.0)
		{
			case 1: printf("bad"); break;
			case 0: switch(Grade < 16.0 && Grade >= 14.0)
			{
				case 1: printf("not bad"); break;
				case 0: switch(Grade < 18.0 && Grade >= 16.0)
				{
					case 1: printf("good"); break;
					case 0: switch(Grade < 20.0 && Grade >= 18.0)
					{
						case 1: printf("very good"); break;
						case 0: printf("excellent"); break;
					}
				}
			}
		}
	}
	
}