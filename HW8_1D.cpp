#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

// define the structure
struct rational
{
	int ss,mm;
};

// define pr
void pr(int aa,int bb)
{
	if(bb == 0)
	{
		printf("Not vallid!!\n");
	}
	else
	{
		printf("%d/%d\n", aa, bb);
	}	
}

// define prs
void prs(int aa,int bb)
{
	int cc, dd;
	if(bb == 0)
	{
		printf("Not possible!!");
	}
	else if(aa % bb == 0)
	{
		cc = (float)aa / bb;
		dd = 1;
		printf("%d/%d\n", cc, dd);
	}
	else
	{ 
		printf("%d/%d\n", aa, bb);
	}	
}	



// define the structure
struct rational plus(struct rational aa,struct rational bb)
{
	struct rational cc;
	cc.mm = aa.mm*bb.mm ;
	cc.ss = aa.ss*bb.mm + bb.ss*aa.mm ;
	return cc;
}

main (void)
{
	struct rational xz,yq,zz;
	
	printf("please enter your first rational number(a/b) :\nplease enter your a :\n");
	scanf("%d",&xz.ss);
	// printf-scanf
	
	printf("please enter your b(b cant be 0 !) :\n");
	scanf("%d",&xz.mm);
	// printf-scanf

	printf("your first rational number is :\n");
	pr(xz.ss,xz.mm);
	// printf-pr

	printf("please enter your second rational number(c/d) :\nplease enter your c :\n");
	scanf("%d",&yq.ss);
		// printf-scanf

	printf("please enter your d(d cant be 0 !) :\n");
	scanf("%d",&yq.mm);
		// printf-scanf

	printf("your second rational number is :\n");
	pr(yq.ss,yq.mm);
		// printf-pr

	zz = plus(xz,yq);
	
	printf("a/b + c/d = \t");
	pr(zz.ss,zz.mm);
	
	if(zz.ss % zz.mm == 0)
	{
		printf("\nand simpled of it is :\n");
		prs(zz.ss,zz.mm);
	}
}
