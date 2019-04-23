// ConsoleApplication37.cpp : This file contains the 'main' function. Program execution begins and ends there.
//WAP for fidnding simple interest

#include "pch.h"
#include <iostream>
#include<conio.h>
#include<string.h>

int main()
{
	float si, p, n, r;
	printf_s("\n it finds the simple inrerest\nEnter the principal, rate, and time: ");
	scanf_s("%f%f%f", &p, &r, &n);
	si = p * n*r;
	printf("Simple interest: %f", si);
	return 0;
}
