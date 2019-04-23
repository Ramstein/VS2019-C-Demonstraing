// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<conio.h>

int BinaryToDecimal( long n);
int main()
{
	long n;
	printf("Enter a binary number: ");
	scanf_s("%ld", &n);
	printf("%lld in binary = %d in decimal", n, BinaryToDecimal(n));
	return 0;
}
int BinaryToDecimal( long n)
{
	int decimalNumber = 0, i = 0, remainder;
	while (n != 0)
	{
		remainder = n % 10;
		n /= 10;
		decimalNumber += remainder * pow(2, i);
		++i;
	}
	return decimalNumber;
}