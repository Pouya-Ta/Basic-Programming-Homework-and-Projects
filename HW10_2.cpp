#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

void func(int*x,int y,int z);

int main(void)
{
	int a[4] = {4, 5, 1, -10};
	int b[6] = {1, 2};
	printf("%d %d %d\n", *a+2, *(a + 2), *(a+*(a + 2)));
	printf("%d\n", a[b[3]++]++);
	func(&a[0], a[1], 3);
	printf("%d %d %d\n", a[0], a[1], a[2]);
	func(&b[0], b[1], 2);
	printf("%d %d %d\n", b[0], b[1], b[2]);
}



void func(int*x,int y,int z)
{
	int i;
	for(i = 0; i < z; i++)
		x[i] = x[i] + (i + 1)*y;
}