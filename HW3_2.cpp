#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


int main(void)
{
	int start, end;
	int adad;
	int ragham = 0;
	int ragham1;
	int i = 0;
	int jam1 = 0;
	int jam2 = 0; 
	int jam3= 0;
	int h;
	
	printf("give me start: \n");
	scanf("%d", &start);
	
	printf("give me end: \n");
	scanf("%d", &end);
	
	
	for(adad = start + 1; adad < end; adad++)
	{
		h = adad;

		do
		{
			ragham1 = h % 10;
			ragham = ragham + ragham1;
			
			h -= ragham1;
			h = h / 10;
			 
		}while(h != 0);
		
		if (ragham % 4 == 0)
		{
			printf("%d\t", adad);
			i++;
			
			if (i == 1)
			{
				jam1 = jam1 + adad;
			}
			else if(i == 2)
			{
				jam2 = jam2 + adad;
			}
			else if(i == 3)
			{
				jam3 = jam3 + adad;
			}
		}
		if(i == 3)
		{
			printf("\n");
			i = 0;
		}
		ragham = 0;
	}
	printf("\n");
	printf("-----------------------\n");
	printf("%d\t%d\t%d\n", jam1, jam2, jam3);
	

}