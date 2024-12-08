#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


int main(void)
{
	int hh, mm, H, M;
	// first we define our ints
	
	
	// here we use comb of printf and scanf to get our ints from usres
	printf("give me hour and minute:\n ");
	scanf("%d%d", &hh, &mm);
	
	// here we use while loop for cheking the corectness
	while(hh > 23 || mm > 59)
	{
		printf("invalid answer try again!");
		scanf("%d%d", &hh, &mm);
		
	}
	
	// convert the time to GMT
	H = hh - 3;
	M = mm - 30;
	
	if (H < 0)
	{
		H = H + 24;
		
	}
	if (M < 0)
	{
		M = M + 60;

	}
	
	// print the result
	printf("the hour is %d\n", H);
	printf("the minute is %d\n", M);
	
	return 0;
}