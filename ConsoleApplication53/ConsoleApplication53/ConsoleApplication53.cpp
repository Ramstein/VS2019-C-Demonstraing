#include"pch.h"
#include <stdio.h>
#include<conio.h>

int main()
{
	int x, y, *a, *b, temp;

	printf("Enter the value of x and y\n");
	scanf_s("%d%d", &x, &y);

	printf("Before Swapping\nx = %d\ny = %d\n", x, y);

	a = &x;
	b = &y;

	temp = *b;
	*b = *a;
	*a = temp;

	printf("After Swapping\nx = %d\ny = %d\n", x, y);

	return 0;
}