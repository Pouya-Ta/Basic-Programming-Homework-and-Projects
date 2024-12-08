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

// define the void wich using strcture
void getpars(struct staff pars[5])
{
	int i, j;
	for(i = 0 ; i < 5 ; i++)
	{
		// for loop
		
		printf("enter the firs name of employee %d\n", j = i + 1);
		gets(pars[i].n.fn);
		// using gets and printf here
		
		printf("enter the last name of employee %d\n", j);
		gets(pars[i].n.ln);
		// using gets and printf here
	}
}


// define the void wich is using strcture too
void show_staff(struct staff pars[5])
{
	int i, j, k, l, sum[5]={0};
	for(i = 0; i < 5; i++)
	{
		//using for loop as usual
		printf("\n\nfirst and last name of employee %d:\n",j = i + 1);
		puts(pars[i].n.fn);
		puts(pars[i].n.ln);
		
		for(k=0 ; k<4 ; k++)
		{
			// using for loop again to show this part
			printf("enter work of employee %d in week %d (how many hours?):\n", j, l = k + 1);
			scanf("%d",&pars[i].weekly[k]);
			sum[i] += pars[i].weekly[k];	
		}
		
		pars[i].weekly_avg = (float)sum[i]/4 ;
		printf("weekly average work of employee %d is %.2f\n", j, pars[i].weekly_avg);
		
	}
	
}



void who_is_lazy(struct staff pars[5])
{
	int i, j, k, l, FL;
	
	for(i = 0; i < 5; i++)
	{
		FL = NULL;	
		for(k = 0 ; k < 4 ; k++)
		{
			if(pars[i].weekly[k]<40)	
				FL = 1;
		}
	
	if(FL == 0)
	{
		// DO NOTHING
	}
	else{
		printf("employee number %d :\n",j = i + 1);
		puts(pars[i].n.fn);
		puts(pars[i].n.ln);
	}	
	
	}
}

main(void)
{
	struct staff pars[5];
	getpars(pars);
	show_staff(pars);
	
	printf("\nthe list of lazy employees (worked at least one week less than 40 hours!) is :\n");
	who_is_lazy(pars);
	
}
