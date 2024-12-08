#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


int main(void)
{
	double x;
	double answer = 1;
	double final_answer = 1;
	
	printf("enter your x: \n");
	scanf("%lf", &x);
	
	for(int i = 1; i < 6; i++)
	{
		answer *= x / (2 * i - 1);
		answer *= (-x) / (2 * i);
		
		final_answer += answer;
	}
	
	printf("the final result of cos(x) is %lf\n", final_answer);
}