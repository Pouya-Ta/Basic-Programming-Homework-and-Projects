#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

int main(void)
{
	int a, b, c, d, e, f;
	float ab_cd = 0;
	float ab_ef = 0;
	float cd_ef = 0;
	float MIN = 0;
	float MAX = 0;
	
	printf("give me the first point wich is a and b: ");
	scanf("%d%d", &a, &b);
	
	printf("\ngive me the first point wich is c and d: ");
	scanf("%d%d", &c, &d);	
	
	printf("\ngive me the first point wich is e and f: ");
	scanf("%d%d", &e, &f);
	
	ab_cd = sqrt((c - a)*(c - a) + (d - b)*(d - b));

	ab_ef = sqrt((e - a)*(e - a) + (f - b)*(f - b));
	
	cd_ef = sqrt((e - c)*(e - c) + (f - d)*(f - d));



	
	
	switch(ab_cd > ab_ef)
	{
		case 1: switch(ab_cd > cd_ef)
		{
			case 1: switch(ab_ef > cd_ef)
			{
				case 1: MIN = cd_ef; printf("the min dist is for cd to ef\n the MIN is %f\n", MIN); break;
				case 0: MIN = ab_ef; printf("the min dist is for ab to ef\n the MIN is %f\n", MIN); break;
			}
			break;
			case 0: MIN = ab_ef; printf("the min dist is for ab to ef\n the MIN is %f\n", MIN); break;
		}
		break;
		case 0: switch(ab_ef > cd_ef)
		{
			case 1: MAX = ab_ef; switch(ab_cd > cd_ef)
			{
				case 1: MIN = cd_ef; printf("the min dist is for cd to ef\n the MIN is %f\n", MIN); break;
				case 0: MIN = ab_cd; printf("the min dist is for ab to cd\n the MIN is %f\n", MIN); break;
			}
			break;
			case 0: MIN = ab_cd; printf("the min dist is for ab to cd\n the MIN is %f\n", MIN); break; 
		}
		break;
	}
}

