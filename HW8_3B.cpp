#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>
// defire headerfiles and N as 21.
#define N 21

// define the structure
struct name
{
	char fn[N],ln[N];
};


// define the structure
struct staff
{
	struct name n;
	int weekly[4];
	float weekly_avg;
};

main(void)
{
	struct staff pars[5];
	int j, i;
	for(i=0 ; i < 5 ; i++)
	{
		// using for loop
		
		printf("enter the firs name of employee %d\n", j = i + 1);
		gets(pars[i].n.fn);
		// using gets and printf here
		
		printf("enter the last name of employee %d\n", j);
		gets(pars[i].n.ln);
		// using gets here
	}
	printf("\nthe list of your 5 emloyee has shown below :\n");
	for(i = 0; i < 5; i++)
	{
		// using for loop
		
		printf("first and last name of employee %d\n", j = i + 1);
		puts(pars[i].n.fn);
		puts(pars[i].n.ln);
		// using puts ang printf in this loop is important
	}	
		
}
