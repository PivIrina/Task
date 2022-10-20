// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Function.h"
#include <string>

int main()
{
	char ch = 'a';
	std::cout << "Calculator\n Enter  two operands and operator (+, -, /, *) \n";
	double x, y;
	char op;
	do
	{
		
		std::cin >> x>> op >> y;
		switch (op)
		{
		case '+': {sum(x, y); break;}
		case '*': {mult(x, y); break; }
		case '-': {sub(x, y); break; }
		case '/': {div(x, y); break; }
		default: {std::cout << "Error!\n"; }
		}
		std::cout << "Press n to exit or y to continue\n";
		std::cin >> ch;
	} while (ch != 'n');
	
		return 0;
}



