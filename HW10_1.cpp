#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

main(void)
{
	
	int m = 3;
	int n = 4;
	int i, j;
	
	int* A = (int*)malloc(m*n*sizeof(int));
	int* B = (int*)malloc(m*n*sizeof(int));
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
			{
				A[i*m+j] = i*j; 
				if(i == j)
					B[i*m+j] = 1;
				else
					B[i*m+j] = 0;
			}
		}
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
			printf("%-4d\n", B[i*m+j]);
	}
}