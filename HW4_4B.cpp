#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


int main(void)
{
	int number;
	int check1;
	int check2;
	
	printf("enter a int number: \n");
	scanf("%d", &number);
	
	
	check1 = sqrt(number);
	check2 = check1 * check1;
	
	if(number == check2)
	{
		printf("the number is a square of an int number\n");
		return 1;
	}
	else if(number != check2)
	{
		printf("the number is not a square of any number\n");
		return 0;
	}
}