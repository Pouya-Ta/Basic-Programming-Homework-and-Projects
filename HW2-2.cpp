#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>


int main(void)
{
	int day;
	
	printf("give me a day's number in 365: \n");
	scanf("%d", &day);
	
	switch(day <= 31)
	{
		case 1: printf(" %d farvardin, bahar\n", day);break;
		case 0: switch(day > 31 && day <= 62)
		{
			case 1: day -= 31; printf("%d ordibehesht, bahar\n", day); break;
			case 0: switch(day > 62 && day <= 93)
			{
				case 1: day -= 62; printf("%d khordad, bahar\n", day); break;
				case 0: switch(day > 93 && day <= 124)
				{
					case 1: day -= 93; printf("%d tir, summer\n", day); break;
					case 0: switch(day > 124 && day <= 155)
					{
						case 1: day -= 124; printf("%d mordad, summer\\n", day); break;
						case 0: switch(day > 155 && day <= 186)
						{
							case 1: day -= 155; printf("%d shahrivar, summer\\n", day); break;
							case 0: switch(day > 186 && day <= 216)
							{
								case 1: day -= 186; printf("%d mehr, paeiz\n", day); break;
								case 0: switch(day > 216 && day <= 246)
								{
									case 1: day -= 216; printf("%d aban, paeiz\n", day); break;
									case 0: switch(day > 246 && day <= 276)
									{
										case 1: day -= 246; printf("%d azar, paeiz\n", day); break;
										case 0: switch(day > 276 && day <= 306)
										{
											case 1: day -= 276; printf("%d day, zemestoon", day); break;
											case 0: switch(day > 306 && day <= 336)
											{
												case 1: day -= 306; printf("%d bahman, zemestoon\n", day); break;
												case 0: switch(day > 336 && day <= 365)
												{
													case 1: day -= 336; printf("%d esfand, zemestoon\n", day);break;
													case 0: printf("sal kabiseh, 30 esfand, zemestoon\n"); break;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}