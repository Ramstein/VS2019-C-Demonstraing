// Finding the roots of quadratric equations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
    std::cout << "Hello World!\n"; 

	float a, b, c;
	flaot D, x1, x2;

	printf("Put the Coefficients of quadratic equations\n put a");
	scanf_s("%f"&a);

	printf("Put b");
	scanf_s("%f"&b);

	printf("Put b");
	scanf_s("%f"&b);
	D = b * b - (4 * a*c);
	x1 = (-b) + pow(D, 0.5);
	x2 = (-b) + pow(D, 0.5);

	printf("X1=%f  X2=%f", x1, x2)
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
