#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

int main(void)
{
	char player, computer;
	int n;
	

	printf("give me your object(it must in ['s', 'p', 'z']: )");
	scanf("%c", &player);
	
	char s = 1;
	char p = 2;
	char z = 3;

	while (player > 3 || player < 0)
	{
		printf("invalid answer");
		printf("give me your object(it must in ['s', 'p', 'z']: )");
		scanf("%c", &player);
	}
	
	
	n = rand() % 100;
    if (n < 33) 
	{
        // s is denoting Stone
        computer = 's';
    } 
	else if (n > 33 && n < 66) 
	{
        // p is denoting Paper
        computer = 'p';
    }
        // z is denoting Scissor
    else 
	{
        computer = 'z';
    }
    
    if (player == 's' && computer == 'z')
	{
        printf("computer's choice was %c you win!\n", computer);
    }
	else if (player == 'p' && computer == 's')
	{
        printf("computer's choice was %c you win!\n", computer);
    }
	else if (player == 'z' && computer == 'p') 
	{
        printf("computer's choice was %c you win!\n", computer);
    } 
	else if (player == computer) 
	{
        printf("same results, the game was draw!\n");
    } 
	else 
	{
        printf("computer won the game\n");
    }
        
    printf("tnx for playing :)\n");
}