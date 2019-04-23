// Findinig the roots of quadratic equation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<conio.h>
#include<math.h>

int main()
{
	std::cout << "Hello World!\n";

	float a, b, c;
	float D, x1, x2 ,p;

	printf("Put the Coefficients of quadratic equations\n put a: ");
	scanf_s("%f",&a);

	printf("Put b: ");
	scanf_s("%f",&b);

	printf("Put c: ");
	scanf_s("%f",&c);

	D = b * b - (4 * a*c);
	p = (pow(D, 0.5));
	x1 = (-b) - p;
	x2 = (-b) + p;

	printf("\nX1=%f  X2=%f", x1, x2);
	return 0;
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
