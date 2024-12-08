#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	float s;
	int p;
	
	printf("give me three int number for triangle\n: ");
	scanf("%d%d%d", &a, &b, &c);
	
	while (a < 0 || b < 0 || c < 0)
	{
		printf("invalid answer");
		printf("give me three int number for triangle\n: ");
		scanf("%d%d%d", &a, &b, &c);
	}
	
	if((a + b > c) && (a + c > b) && (b + c > a))
	{
		printf("these ints are valid for triangle\n");
		if ((a * a) + (b * b) == (c * c) || (a * a) + (c * c) == (b * b) || (c * c) + (b * b) == (a * a))
		{
			printf("your triangle is in fisaghoures field\n");
			p = a + b + c;
			s = sqrt(p/2 * (p/2 - a) * (p/2 - b) * (p/2 - c));
			
			printf("the mohit is %d\n", p);
			printf(" the masahat is %f\n", s); 
		}
		else
		{
			printf("your triangle is not in fisaghoures field\n");
		}
		
	}
	else
	{
		printf("your ints are invalid for triangle\n");
	}
	return 0;
}