#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


int maghsoom(unsigned int x ,unsigned int y);

int main(void)
{
	unsigned int x, y;
	
	printf("enter x and y: \n");
	scanf("%d%d", &x, &y);
	
	printf("the biggest maghsoom elayh moshtarak is %d",maghsoom(x,y));
}

int maghsoom(unsigned int x,unsigned int y)
{
	int z;
	
	if(x <= y)
	{
		z = y;
		y = x;
		x = z;	
	}
	if(y != 0)
	{
		return maghsoom(x % y, y);	
	}
	else
	{
		return x;
	}
}
