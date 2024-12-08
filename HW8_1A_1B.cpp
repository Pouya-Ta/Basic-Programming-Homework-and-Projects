#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>
// enter the header files

// define this structure
struct rational
{
	int ss, mm;
}; 




// define the void
void pr(int aa,int bb)
{
	if(bb == NULL)
	{
		printf("Not vallid\n");
	}
	else
	{
		printf("%d/%d\n", aa, bb);
	}	
}

// define the structure.
struct rational reverse(struct rational aa)
{
	struct rational bb;
	if((aa.mm == 0) || (aa.ss == 0))
	{
		// do nothing
	}
	else{
		bb.ss = aa.mm;
		bb.mm = aa.ss;
		return bb;
	}
}

main (void)
{
	struct rational xz, yq;
	
	printf("please enter your rational number(a/b): \n");
	printf("please enter your a: \n");
	
	scanf("%d", &xz.ss);
	
	printf("please enter your b: \n");
	
	scanf("%d", &xz.mm);
	
	printf("your rational number is: \n");
	
	pr(xz.ss, xz.mm);
	
	yq = reverse(xz);
	
	printf("the reverse of your rational number is :\n");
	
	pr(yq.ss, yq.mm);	
}