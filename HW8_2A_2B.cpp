#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>



struct time
{
	int hour, minute, second;
};


struct time gettime(int aa,int bb, int cc)
{
	struct time x;
	printf("please enter your hour:\n");
	scanf("%d", &aa);
	while((aa < 0) || (aa > 24))
	{
		printf("wrong! try again:\n");
		scanf("%d", &aa);
	}
	x.hour = aa;
	
	printf("please enter your minute:\n");
	scanf("%d", &bb);
	while((bb < 0) || (bb > 60))
	{
		printf("invalid:\n");
		scanf("%d", &bb);
	}
	x.minute = bb;
	
	printf("please enter your second:\n");
	scanf("%d", &cc);
	while((cc < 0) || (cc > 60))
	{
		printf("invalid:\n");
		scanf("%d", &cc);
	}
	x.second = cc;
	
	return x;
}


void shtime(struct time aa)
{
	if(aa.hour <=9)
	{
		printf("0%d:\n", aa.hour);
	}	
	else
	{
		printf("%d:\n", aa.hour);
	}
	
	if(aa.minute <= 9)
	{
		printf("0%d:\n", aa.minute);
	}	
	else
	{
		printf("%d:\n", aa.minute);
	}
	
	if(aa.second <= 9)
	{
		printf("0%d:\n", aa.second);
	}	
	else
	{
		printf("%d:\n", aa.second);
	}	
}


main(void)
{
	struct time t;
	printf("please enter your time (hh:mm:ss):\n");
	t = gettime(t.hour,t.minute,t.second);
	printf("your time is:\n");
	shtime(t);	
}
