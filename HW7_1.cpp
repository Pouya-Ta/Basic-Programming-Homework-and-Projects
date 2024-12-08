#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

#define zed 21
// first we define zed as 21.

int check(char str1[] , char str2[])
{ 
	// this one do things we need in main.
	
	char ch = str2[0];    
	int i;
	int q, j;
	// defining the variables.
	
	
	// using if to compare.
	if(strlen(str2) > strlen(str1))
	{
		return 0;   
	}
	
	// here we use for loop to count.
	for(i=0; str1[i]!= 0; i++)
	{
		q = i;
		
		if(str1[i] == ch){
			q++;
			
			for(j=1; str2[j]!= 0; j++)
			{
				if(str2[j] == str1[q])
				{
					q++;
				}
				else
				{ 
					break;
				}
			}
			if(j == strlen(str2))
			{
				// if j was as same as strlen(lenght) str2, it's return 1.
				return 1;
			}
		}
	}
	// else it's return NULL.
	return 0;
}


int main(void)
{
	// define str1 and str2.
	char str1[zed], str2[zed];
	
	
	// get str1 and str2 from users.
	puts("Enter the str1 : ");
	gets(str1);
	
	printf("\n");
	
	puts("Enter the str2 : ");
	gets(str2);
	
	printf("\n");
	
	// output.
	if(check(str1,str2))
	{
		puts("str2 is included in str1");
	}
	else
	{
		puts("str2 is not included in str1");
	}
}