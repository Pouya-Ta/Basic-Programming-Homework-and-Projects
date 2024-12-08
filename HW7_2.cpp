#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

// first we definr m and n
#define a 21
#define b 5

main()
{
	char list1[a][b];
	// here define vars.
	
	char key;
	int i, j, k, w;
	
	// using for loop to get student's names
	for(i = 0; i < a; i++)
	{
		printf("enter the name number %d: \n",j = i + 1);
		gets(list1[i]);
	}
	
	
	// get the key from users.
	printf("enter the key: \n");
	key = getchar();
	
	printf("\n");
	
	printf("names with this character are: \n");
	
	// doing the final part.
	for(i = 0; i < a; i++)
	{
	
		w = 0;
		
			for(k = 0; k < b; k++)
				if(key == list1[i][k])
				{
					w = 1;
				}
				
		if(w == 0)
		{
			return 0;
		}		
		else
		{
			puts(list1[i]);
		}
	}
	
	printf("list1[%d][%d] = %ch\n", a, b, list1[a][b]);
}




