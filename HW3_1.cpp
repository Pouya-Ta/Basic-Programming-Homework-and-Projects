#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

int main(void)
{
	int n;
	printf("give me your 'n': \n");
	scanf("%d", &n);
	
	
	float fnumber1;
	printf("give a float number: \n");
	scanf("%f", &fnumber1);

	float fnumber2;
	printf("give a float number: \n");
	scanf("%f", &fnumber2);
		
	float point = abs(fnumber2 - fnumber1);
		
	int number = 0;
	
	for(int i = 0; i < n - 2; i++)
	{
		float fnumber;
		printf("give a float number: \n");
		scanf("%f", &fnumber);
		
		float point1 = abs(fnumber - fnumber2);
		
		if(point1 < point)
		{
			point = point1;
			number = i + 1;
		}
		
		fnumber2 = fnumber;	
		
	}
	
	int sit1 = number + 1;
	int sit2 = number + 2;
	
	
	printf("the least point was %f\n and the number of calculation is %d\n so the sits are %d and %d\n", point, number, sit1, sit2);
}