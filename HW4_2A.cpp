#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


int main(void)
{
	int n; 
	int result = 1;
	int adad = 0;
	int result0 = 0;
	int a;
	
	printf("enter a int number of 'n': \n");
	scanf("%d", &n);
	
	if (n == 1)
	{
		result = n;
		printf("the result of fibonacci is %d\n", result);
	}
	else if(n > 1)
	{
		for (int i = 2; i <= n; i++)
		{
			a = result + result0;	
			result0 = result;
			
			result = a;
			
		}
		printf("the result of fibonacci is %d\n", result);
	}
	return result;
}