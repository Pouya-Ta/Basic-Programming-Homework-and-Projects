#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

int adad_aval(int n);

int main(void)
{
	int m, n;
	int number = 0;
	
	
	for(int i = 1; i <= n / 2; i++)
	{
		if((n % i == 0) && (n / i == i))
		{
			m = i * i;
			m *= 2;
			
			n -= m;
			
			
			switch (adad_aval(n) == 0)
			{
				case 1: printf("mesal naghz!\n"); break;
				case 0: continue;
			}
		}
		number++; 	
	}
}



int adad_aval(int n)
{
	
	int   i, flag = 0;

	
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
		return 1;
	}	
  	else
	{
		printf("not prime!/n");
    	return 0;
	}
}