#include <stdio.h>
#include "Function.h"
#include <iostream>
void sum(float x, float y)
{
	printf("%.2f \n", (x+y));
}

void mult(float x, float y)
{
	printf("%.2f \n", (x*y));
}
void sub(float x, float y)
{
	printf("%.2f \n", (x-y));
}
void div(float x, float y)
{
	printf("%.2f \n", (x/y));
}