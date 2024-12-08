#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


int main(void)
{
	int i, j;
	
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			int adad = j * i;
			printf("%d\t", adad);
		}
		printf("\n");
	}
	
}