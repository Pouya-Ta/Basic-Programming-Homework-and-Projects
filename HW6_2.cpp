#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


int main(void)
{
	int n;
	int matrix[n][n];
	
	printf("enter the number of n: \n");
	scanf("%d", &n);
	
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("enter the int matrix[i][j]: ");
			scanf("%d", &matrix[i][j]);
		}
	}
	bool isSymmetric = true;
	bool isAntiSymmetric = true;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			isSymmetric &= (matrix[i][j] == matrix[j][i]);
			isAntiSymmetric &= (matrix[i][j] == -matrix[j][i]);
		}
	}
	if (isSymmetric)
	{
		printf("The matrix is symmetric.\n");
	}
	else
	{
		printf("The matrix is not symmetric.\n");
	}
	if (isAntiSymmetric)
	{
		printf("The matrix is anti-symmetric.\n");	
	}
	else
	{
		printf("The matrix is not anti-symmetric.\n");
	}
	return 0;
}