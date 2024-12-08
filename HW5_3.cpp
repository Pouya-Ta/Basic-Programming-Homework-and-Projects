#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


int main(void)
{
	// first of all we have to define int anf floats which we need!
	int n, i, j, y;
	float x;

	// get int number of students from users
	printf("enter number of the students: \n");
	scanf("%d",&n);

	// now we define arrays which we will use in this program
	int Array1[n];
	float Barray[n];

	// using for loop to get student's number and their grade from users. 
	for(i=0 ; i < n; i++)
	{
		// in each loop computer will get those two number for each student
		printf("please enter the student code number %d : \n",j = i + 1);
		scanf("%d", &Array1[i]);
		printf("please enter the grade of this student : \n");
		scanf("%f", &Barray[i]);
	}
	
	// using for loop again to design and set what we need
	for(j = 0; j < n; j++)
	{
		for(i = 0; i < n - j - 1; i++)
		{
			if(Barray[i] > Barray[i+1])
			{
			
				x = Barray[i];
				Barray[i] = Barray[i+1];
				Barray[i+1] = x;
			
				y = Array1[i];
				Array1[i] = Array1[i+1];
				Array1[i+1] = y;
			}
		}
	}
	
	// after each loop the program will print one tab to seprate numbers.
	for(i = 0; i < n; i++)
	{
		printf("%d\t", Array1[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < n; i++)
	{
		printf("%.2f\t",Barray[i]);
	}
	printf("\n\n");
	
	int Carray[6]={0, 0, 0, 0, 0, 0};
	
	
	// using for loop here to calculate the number of A, B, C,..... grades. 
	for(i = 0; i < n; i++)
	{
		if((Barray[i] <= 20) && (Barray[i] > 18))
		{
			Carray[0] += 1;
		}
		if((Barray[i] <= 18) && (Barray[i] > 16))
		{
			Carray[1] += 1;
		}
		if((Barray[i] <= 16) && (Barray[i] > 14))
		{
			Carray[2] += 1;
		}
		if((Barray[i] <= 14) && (Barray[i] > 12))
		{
			Carray[3] += 1;
		}
		if((Barray[i] <= 12) && (Barray[i] > 10))
		{
			Carray[4] += 1;
		}
		if(Barray[i] <= 10)
		{
			Carray[5] += 1;
		}
	}
	
	
	// showing the final result:)))
	for(i = 0; i < 6; i++)
	{
		if(i == 0)
		{
			printf("\nA:\t");
		}
		if(i == 1)
		{
			printf("B:\t");
		}
		if(i == 2)
		{
			printf("C:\t");
		}
		if(i == 3)
		{
			printf("D:\t");
		}
		if(i == 4)
		{
			
			printf("E:\t");
		}
		if(i == 5)
		{
			printf("F:\t");
		}
		
		for(j = 0; j < Carray[i]; j++)
		{
			printf("\t*");
		}
		
		printf("\n");
	}
	
	return 0;
	}

	


