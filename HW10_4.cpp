#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>
// here we define what header files which we need in programm



int main(void)
{
	
	// define nn, mm1, mm2, i, j, k, q as ints
	int nn, mm1, mm2, i, j, k, q;
	
	// get the number of n from users
	printf("please enter n : \n");
	scanf("%d", &nn);
	
	// define this one here
	float* a = (float*)malloc(nn*sizeof(float));
	
	
	// using for loop here to get *(a + i) from users
	for(i = 0; i < nn; i++)
	{
		j = i + 1;
		printf("enter a[%d]:", j);
		scanf("%f", &*(a + i));
	}
	
	// using for loop here to print a[].
	for(i = 0; i < nn; i++)
	{
		printf("%.2f\t", a[i]);
	}
	printf("\n");
	
	
	// using if here.
	if(nn % 2 == 0)
	{
		mm1 = ((float)nn) / 2;
		mm2 = mm1;
	}
	
	
	// using if here.	
	if(nn % 2 == 1)
	{
		mm1 = ((float)(nn - 1)) / 2;
		mm2 = ((float)(nn + 1)) / 2;
	}
		
	float* bb=(float*)malloc(mm1*sizeof(float));
	float* cc=(float*)malloc(mm2*sizeof(float));
	
	
	// using for loop here to fix b[i] as a[k]
	for(k = 1, i = 0; i < mm1; i++, k += 2)
	{
		bb[i] = a[k];
	}
	
	// using for loop here to fix c[i] as a[q]
	for(q = 0, j = 0; j < mm2; j++, q += 2)
	{
		cc[j] = a[q];	
	}
	
	printf("enter even numbers of the array:\n");
	for(i = 0; i < mm1; i++)
	{
		printf("%.2f\t", bb[i]);
	}
	
	printf("\nenter odd numbers of array:\n");
	
	
	for(i = 0; i < mm2; i++)
	{
		printf("%.2f\t", cc[i]);
	}
	
	printf("\nyour array\tevens \t\todds  are:\n");
	for(i = 0, k = 0, q = 0; i < nn; i++, k++, q++)
	{
		printf("%.2f\t", a[i]);
		
		if(k < mm1)
		{
		
			printf("%.2f\t", bb[k]);
		}
		if(q < mm2)	
		{
			printf("%.2f\t\n", cc[q]);
		}
	}	
}