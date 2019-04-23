	/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =1 :Fizz-Buzz problem handled.cpp : 

Name= Md Zeeshan
section-A5/16
submitted to- Ms. Bhargavi singh*/


#include <iostream>
#include<stdio.h>
#include<conio.h>

int main()
{
	int n, m, i, sum = 0;
	printf("\nEnter the range:");
	scanf_s("%d%d", &m, &n);
	if (m > n)
	{
		for (i = n; i <= m; i++)
		{
			if ((i % 3 == 0) && (i % 5 == 0))
			{
				sum = sum + i;
				printf("Fizz\n");

			}
		}
	}
	else if (n > m)
	{
		for (i = n; i >= m; i--)
		{
			if ((i % 3 == 0) || (i % 5 == 0))
			{
				sum += i;
				printf("Buzz\n");
			}	
		}
	}	
	printf("%d\n", sum);
	return 0;
}
