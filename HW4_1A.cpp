#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


int main(void)
{
	float a, b, c, a2, b2, c2;
	float kasr1, kasr2, kasr3;
	float x, y;
	
	printf("enter a and b and c: \n");
	scanf("%f%f%f", &a, &b, &c);
	
	printf("enter a' ,b' and c': \n");
	scanf("%f%f%f", &a2, &b2, &c2);
	
	kasr1 = a / a2;
	kasr2 = b / b2;
	kasr3 = c / c2;
	
	if(kasr1 == kasr2 && kasr2 == kasr3)
	{
		printf("the equation has countless answer\n");
		x = 1;
		y = (-a * x + c) / b;
		printf("one of the answers is: x = %f and y = %f\n", x, y);
		
	}
	else if(kasr1 == kasr2 && kasr1 != kasr3)
	{
		printf("the equation has no answer!!\n");
		
	}
	else if(kasr1 != kasr2)
	{
		printf("the equation has just one answer!\n");
		y = ((a2 * b) - (a * b2)) / ((a2 * c) - (a * c2));
		x = (-b * y + c) / a;
		printf("the result is: x = %f and y = %f", x, y);
	}
	
}