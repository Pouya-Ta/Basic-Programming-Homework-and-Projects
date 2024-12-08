#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


char transform(char s)
{
	int i;
	char res = 'A';
	
	for (i = strlen(&s) - 1; i > -1; i--)
		res += s;
		
	res += 'a';
	return res;
}

int main(void)
{
	int i;
	char s;
	printf("ENTER THE S: \n");
	scanf("%ch", &s);
	
	printf("%ch\n", transform(s));
	return 0;
}
