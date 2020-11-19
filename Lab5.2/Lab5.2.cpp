// Lab5.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char c;
	short   a,
		  b,
		  x;
	char str[128];

	printf("Input a: ");
	scanf_s("%d", &a);
	printf("Input b: ");
	scanf_s("%d", &b);
	printf("\n");

	if (a > b) {
		x = (52 * (int)b / a) + b ;
		sprintf_s(str, "x = (52 * b / a) + b");
		
	} else if (a == b) {
		x = -125;
		sprintf_s(str, "x = -125");
	} else {
		x = (a - 5) / b;
		sprintf_s(str, "x = (a-5)/b");
	}
	printf("Arguments are: a= %d and b= %d\nCalculations by following formula: %s = %d",a, b, str, x);
	scanf_s("%c", &c);
	scanf_s("%c", &c);
    return 0;

}

