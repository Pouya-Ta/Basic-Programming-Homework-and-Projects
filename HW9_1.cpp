#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <math.h>

// first of all we define the structure.

struct rectangle 
{
	// these two prameters are floats
	float height,width;
};


// here we use struct as a inout in this float
float perimeter(struct rectangle ss)
{
	// pp is a float here
	float pp;
	
	// calculate the pp here.
	pp = 2*(ss.height + ss.width);
	
	// at the end this whill return pp
	return pp;
}

// here we use struct as a inout in this float
float area(struct rectangle ss)
{
	// aa is a float here
	float aa;
	
	// calculate the aa here
	aa = ss.height*ss.width;
	
	// return aa at the end
	return aa;
}


int main(void)
{
	// define the rectangle ss.
	struct rectangle ss;
	
	// get input from users.
	printf("enter your rectangle parameter:\nheight:\n");
	scanf("%f", &ss.height);
	
	// get input from users.
	printf("width:\n");
	scanf("%f", &ss.width);
	
	// define these floats
	float pp, aa;
	
	pp = perimeter(ss);
	printf("perimeter is %.2f\n", pp);
	
	aa = area(ss);
	printf("area is %.2f\n", aa);
}

