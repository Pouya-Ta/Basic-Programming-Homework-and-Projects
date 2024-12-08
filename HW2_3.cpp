#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


int main(void)
{
	float a, b, c, d, MAX, MIN;
	do
	{
		printf("give me 4 int number:\n ");
		scanf("%f%f%f%f", &a, &b, &c, &d);
	}while(a == b || a == c || a == d || b == c || b == d || c == d);
	
	printf("the numbers are a = %f, b = %f, c = %f, d = %f\n", a, b, c, d);
	
	switch(a > b)
	{
		case 1: switch(a > c)
		{
			case 1: switch(a > d)
			{
				case 1: MAX = a; switch (b > c)
				{
					case 1: switch (c < d)
					{
						case 1: MIN = c; printf("the numbers = %f & %f\n", b, d); switch(b > d)
						{
							case 1: printf("b > d\n"); break;
							case 0: printf("d > b\n"); break;
						}
						break;
						case 0: MIN = d; printf("the numbers = %f & %f\n", b, c); printf("b > c\n"); break;
					}
					break;
					case 0: switch(b < d)
					{
						case 1: MIN = b; printf("the numbers = %f & %f\n", c, d); switch(c > d)
						{
							case 1: printf("c > d\n"); break;
							case 0: printf("d > c\n"); break;
						}
						break;
						case 0: MIN = d; printf("the numbers = %f & %f\n", b, c); printf("b < c\n"); break;	
					}
					break;
					
				}
				break;
				case 0: MAX = d; switch(b > c)
				{
					case 1: MIN = c; printf(" the numbers = %f & %f\n", a, b); printf("a > b\n"); break;
					case 0: MIN = b; printf(" the numbers = %f & %f\n", a, c); printf("a > c\n"); break;
				}
				break;
			}
			break;
			case 0: switch(c > d)
			{
				case 1: MAX = c; switch(b > d)
				{
					case 1: MIN = d; printf(" the numbers = %f & %f\n", a, b); printf("a > b\n"); break;
					case 0: MIN = b; printf(" the numbers = %f & %f\n", a, d); switch(a > d)
					{
						case 1: printf("a > d\n"); break;
						case 0: printf("a < d\n"); break;
					}
					break;
				}
				break;
				case 0: MAX = d; MIN = b; printf(" the numbers = %f & %f\n", a, c); printf("a < c\n"); break;
			}
			break;
		}
		break;
		case 0: switch(a > c)
		{
			case 1: switch(b < d)
			{
				case 1: MAX = d; MIN = c; printf(" the numbers = %f & %f\n", a, b); printf("a < b\n"); break;
				case 0: MAX = b; switch(c > d)
				{
					case 1: MIN = d; printf(" the numbers = %f & %f\n", a, c); printf("a > c\n"); break;
					case 0: MIN = c; printf(" the numbers = %f & %f\n", a, d); if(a > d)
					{
						printf("a > d\n");
						break;
					}
					else
					{
						printf("a < d\n");
						break;
					}
					break;
				}
				break;
			}
			break;
			case 0: switch(a > d)
			{
				case 1: MIN = d; switch(c > b)
				{
					case 1: printf(" the numbers = %f & %f\n", a, b); printf("a < b\n"); break;
					case 0: printf(" the numbers = %f & %f\n", a, c); printf("a < c\n"); break;
				}
				break;
				case 0: MIN = a; switch(c > b)
				{
					case 1: switch(c > d)
					{
						case 1: switch(d < b)
						{
							case 1: printf(" the numbers = %f & %f\n", d, b); printf("b > d\n"); break;
							case 0: printf(" the numbers = %f & %f\n", d, b); printf("d > b\n"); break;
						}
						break;
						case 0: printf(" the numbers = %f & %f\n", b, c); printf("c > b\n"); break;
					}
					break;
					case 0: switch(b > d)
					{
						case 1: switch(c > d)
						{
							case 1: printf(" the numbers = %f & %f\n", c, d); printf("c > d\n"); break;
							case 0: printf(" the numbers = %f & %f\n", c, d); printf("d > c\n"); break;
						}
						break;
						case 0: printf(" the numbers = %f & %f\n", c, b); printf("b > c\n"); break;
					}
					break;
				}
				break;
			}
			break;
		}
		break;
	}
	
}