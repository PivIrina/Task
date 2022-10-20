// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Function.h"


int main()
{
	char ch = 'a';
	printf ("Calculator\n ");
	float x, y;
	char op = '+';
	do
	{
		printf("Enter  two operands and operator (+, -, /, *) \n Ex:2+3\n");
	
		
		scanf("%f%c%f", &x,&op, &y);
		switch (op)
		{
		case '+': {sum(x, y); break;}
		case '*': {mult(x, y); break; }
		case '-': {sub(x, y); break; }
		case '/': {div(x, y); break; }
		default: {printf ("Error!\n");}
		}
		printf( "Press n to exit or enter to continue\n");
		
		ch = getchar();
	} while ((ch = getchar()) != 'n' && ch != EOF);
	
		return 0;
}



