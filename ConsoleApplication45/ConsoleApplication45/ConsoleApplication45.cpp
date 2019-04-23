// ConsoleApplication45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<math.h>


int main()
{
	long long int x, sum = 0;
	printf("Enter a number: ");
	scanf_s("%lld", &x);
	sum = 1 - (pow(x, 2) / 2) + (pow(x, 4) / 24)- (pow(x, 6) / 720) + (pow(x, 8) / 40320) - (pow(x, 10) / 3628800);
	printf("%lld", sum);
	return 0;


}