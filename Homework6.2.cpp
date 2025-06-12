#include <iostream>
#include <cmath>
#include <Windows.h>

void printPower(int value, int power) 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	std::cout << value << " в степени " << power << " = " << pow(value, power) << std::endl;
}

int main() 
{
	printPower(5, 2);
	printPower(3, 3);
	printPower(4, 4);

	return 0;
}