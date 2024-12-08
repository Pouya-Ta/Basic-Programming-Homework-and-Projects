#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

#define N 21

struct name{
	char fn[N],ln[N];
};
struct staff{
	struct name n;
	int weekly[4];
	float weekly_avg;
};
