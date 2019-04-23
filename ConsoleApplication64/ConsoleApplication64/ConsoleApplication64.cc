// ConsoleApplication63.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{
	int n, i;
	printf("Enter the range for printiing the even and odd numbers: ");
	//printf("Enter an integer\n");
	scanf_s("%d", &n);
	int *even[] = (int *)(malloc(n / 2));
	int *odd[] = (int *)(malloc(n / 2));

	int e
		for (i = 0; i <= n; i++) {
			if (n % 2 == 0)
				*even[i] = i;
			else
				*odd[i] = i;
		}
	for (i = 0; i <= n; i++) {
		printf("Even[i]: %d ,  Odd[i]: %d", i + 1, i + 1, *even[i], *odd[i]);

	}
	return 0;
}