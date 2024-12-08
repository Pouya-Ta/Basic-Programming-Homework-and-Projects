#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

int main(void)
{
	char alfa_path[255] = "C:\\Folder\\alfa.txt";
	char beta_path[255] = "C:\\Folder\\beta.txt";
	FILE *file, *file2;
	file = fopen(alfa_path, "r");
	int sum = 0;
	int n = 0;
	int x = 0;
	while (fscanf(file, "%d", &x) > 0)
	{
		n++;
		sum += x;
	}
	rewind(file);
	int dis = sum;
	for (int i = 0; i < n; i++)
	{
		fscanf(file, "%d", &x);
		if (fabs(sum - n * x) < dis)
		{
			dis = fabs(sum - n * x);
		}
	}
	
	rewind(file);
	file2 = fopen(beta_path, "w");
	
	fprintf(file2, "Average score: %f\n", 1.0 * sum / (1.0 * n));
	
	for (int i = 0; i < n; i++)
	{
		fscanf(file, "%d", &x);
		fprintf(file2, "%d", x);
		if (dis == fabs(sum - n * x))
		{
			fprintf(file2, "*");
		}
		fprintf(file2, "\n");
	}
	fclose(file);
	fclose(file2);
	return 0;
}