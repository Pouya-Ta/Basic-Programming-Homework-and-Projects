#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>



int main(void)
{
	printf("enter the number of n: ");
	int n; scanf("%d", &n);
	int a[n];
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", a + i);
	}
	int m; scanf("%d", &m);
	int b[m];
	for (int i = 0; i < m; i++)
	{
		scanf("%d", b + i);
	}
	int c[n + m];
	int pt = 0;
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = 0; j < pt; j++)
		{
			if (c[j] == a[i])
			{
				flag = false;
			}
		}
		if (flag)
		{
			c[pt++] = a[i];
		}
	}
	for (int i = 0; i < m; i++)
	{
		bool flag = true;
		for (int j = 0; j < pt; j++)
		{
			if (c[j] == b[i])
			{
				flag = false;
			}
		}
		if (flag)
		{
			c[pt++] = b[i];
		}
	}
	printf("The union of the two arrays has length: %d\n", pt);
	printf("The union = {");
	
	for (int i = 0; i < pt; i++)
	{
		if (i == pt - 1)
			printf("%d}", c[i]);
		else
			printf("%d, ", c[i]);
	}
	return 0;
}
