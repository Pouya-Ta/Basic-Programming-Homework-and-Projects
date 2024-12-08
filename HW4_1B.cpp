#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

void equation(float a, float b, float c, float a2, float b2, float c2);


int main(void)
{
	float a, b, c, a2, b2, c2;
	
	a = rand() % 97;
	a += 3;
	
	b = rand() % 97;
	b += 3;
	
	c = rand() % 97;
	c += 3;
	
	c2 = rand() % 97;
	c2 += 3;
	
	b2 = rand() % 97;
	b2 += 3;
	
	a2 = rand() % 97;
	a2 += 3;
	
	printf("%f * x + %f * y = %f\n", a, b, c);
	printf("%f ' * x + %f ' * y = %f '\n", a2, b2, c2);

	equation(a,  b,  c,  a2,  b2,  c2);
}


void equation(float a, float b, float c, float a2, float b2, float c2)
{
	float x, y;
	float kasr1, kasr2, kasr3;

	
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



