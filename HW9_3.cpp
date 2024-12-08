#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>
// define headerfiles.


int main(void)
{
	FILE *pp, *qq;
	
	// bayad user file haro uploud kone.
	pp = fopen(" ", "r");
	qq = fopen(" ", "w");
	
	// here we define vareables
	int i, j, N1;
	int l = 1;
	char charac;
	while(feof(pp) == 0)
	{
		// here we use while loop to do what we need.
		charac = fgetc(pp);
		
		// here we use if to increase l
		if(charac == '\n')
		{
			l++;
		}
	}
	N1 = l;
	rewind(pp);
	
	// here we define some var's.
	long id[N1]; 
	long rr;
	float mm[N1];
	float te;
	
	for(i = 0; i < N1; i++)
	{
		// here we use for loop.
		fscanf(pp ,"%ld", &id[i]);
		fscanf(pp ,"%f", &mm[i]);
	}
	
	for(i = 0; i < N1; i++)
	{
		// using for loop
		for(j = 0; j < N1; j++)
		{
			// using for loop 
			if(mm[j] < mm[j + 1])
			{
				// using if here 
				te = mm[j];
				mm[j] = mm[j + 1];
				mm[j + 1] = te;
				rr = id[j];
				id[j] = id[j + 1];
				id[j + 1] = rr;
			}
		}
	}
	
	// using for loop.
	for(i = 0; i < N1; i++)
	{
		fprintf(qq, "%ld ", id[i]);
		fprintf(qq, "%.2f", mm[i]);
		fprintf(qq, "\n");
	}
	
	fclose(qq);
	fclose(pp);
	
	// using for loop.
	for(i = 0; i < N1; i++)
	{
		printf("%ld\t", id[i]);
		printf("%.2f\t", mm[i]);
		printf("\n");
	}
	
}