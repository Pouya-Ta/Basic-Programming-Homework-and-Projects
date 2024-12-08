#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


int main(void)
{
	int n, i, flag = 0;
	
	printf("Enter a positive integer: \n");
	scanf("%d", &n);

	if (n == 0 || n == 1)
	{
    	flag = 1;
	}
  	for (i = 2; i <= n / 2; ++i) 
  	{
    	if (n % i == 0) 
		{
    	  flag = 1;
    	  break;
    	}
  	}

  	if (flag == 0)
    {
		printf("%d is a prime number\n", n);
		return 1;
	}	
  	else
	{
    	printf("%d is not a prime number\n", n);
    	return 0;
	}
}