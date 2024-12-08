#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


int fibonacci(int n);

int main(void)
{
	int n;
	
	printf("enter a int number of 'n': \n");
	scanf("%d", &n);
	
	
	fibonacci(n);
}


int fibonacci(int n)
{
	int result = 1;
	int adad = 0;
	int result0 = 0;
	int a;
	int m = 0;
	
	
	if (n == 1)
	{
		printf("the number is in fibonacci series!\n");
	}
	else if(n > 1)
	{
		
			for (int i = 2; ; i++)
			{
				a = result + result0;	
				result0 = result;
				
				result = a;
				
				switch(result < n)
				{
					case 1: continue;
					case 0: switch(result == n)
					{
						case 1: printf("the number is in fibonacci series!\n"); return 0;
						case 0: printf("the number is not in fibonacci series!\n"); return 0;

					}
					break;
				}
				
			}
	}
	return 0;
}