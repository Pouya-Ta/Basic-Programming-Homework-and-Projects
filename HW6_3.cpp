#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

int main(void)
{
	// first we define what we need.
	int size, i, n;
	int array1[size + 1];

	
	// we define 'size' to show the size of the array.
	printf("enter size of the array: \n");
	scanf("%d", &size);
	
	// get the Components of the array from users!
	printf("enter Components of the array: \n");
	
	// using for loop to get all of the Components of the array until the time which 'i (i = 0) < size'. 
	for(i = 0; i < size ; i++)
	{
		// get all of them with scanf!
		scanf("%d", &array1[i]);
	}
	
	
	// here we get the number from usrs which will save in 'n' 
	printf("Please enter the number of 'n': ");
	scanf("%d", &n);
	
	
	//using for loop again to show and calculate this part.
	for (i = 0; i < size; i++)
	{
		if(n < array1[i])
		{
			int j;
			for (j = size; j >= i; j--)
			{
				array1[j+1] = array1[j];
			}
			
			array1[i] = n;
			break;
		}
	}
	
	printf("array after processing: \n");
	for (i = 0 ; i <= size; i++)
	{
		printf("%d-%d\n", i, array1[i]);
	}
	return 0;
}