#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

int perfect_square1(int number);


int main(void)
{
	int number;
	printf("enter an int number: \n");
	scanf("%d", &number);
	
	perfect_square1(number);
	


}




int perfect_square1(int number)
{
	int zarf, zarf1, zarf0;
	
	int a = number;

	for(int z = 10; z <= number; z *= 10)
	{
	
		do
		{
			
			zarf = a % z;
			
			for (int i = 1; i <= zarf; i++)
			{
				if (((zarf % i) == 0) && ((zarf / i) == i))
				{
					printf("%d\t", zarf);
				}
				
			}

			a = a / 10;

		
		
		}while(z <= number);
		a = number;
		
	}
	

}

