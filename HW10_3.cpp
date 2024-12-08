#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>
#define N 5			
// here we define what header files which we need in programm
// after that i define N as 5 to take some happenins easier.

int main(void)
{
	// define A[], i, k, B[], Ave as floats or ints
	int A[N], i, k;
	float B[N], Ave = 0;
	
	// using for loop here to get A[] & B[] from users.
	for(i = 0; i < N; i++)
	{
		scanf("%d%f", &A[i], &B[i]);
		// Ave is like a 'zarf' here.
		Ave += B[i];
	}
	// calculate a avg of Ave and make Ave same as it's avg.
	Ave /= N;	
	
	
	// using for loop here tp printf output A[]
	for(i = 0; i < N; i++)
	{
		printf("%d\t", A[i]);
	}
	printf("\n");
		
		
	// using for loop again to print output B[]	
	for(i = 0; i < N; i++)
	{
		printf("%.2f\t",B[i]);
	}
	printf("\n");	
	printf("Average is %f\n\n", Ave);
	
	int j, q;
	k = 0;
	int* CC=(int*)malloc(k*sizeof(int));
	float* DD=(float*)malloc(k*sizeof(float));
	
	
	// using for loop here for the final calculations
	for(j = 0; j < N; j++)
	{
		if(B[j] > Ave)
		{
			CC[k] = A[j];
			DD[k] = B[j];
			k++;
		}	
	}
	printf("students above the Average are :\n");
	for(i = 0; i < k; i++)
		printf("%d\t", CC[i]);					
		
}