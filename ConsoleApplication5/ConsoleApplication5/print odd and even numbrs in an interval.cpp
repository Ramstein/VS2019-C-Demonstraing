/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =31 :All Even and odd numbers in interval :

Name= Md Zeeshan
section-A5/16
submitted to- Ms. Bhargavi singh*/

#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<conio.h>

int main()
{
	int m, n, i,d;
	int even[200] = {};
	int odd[200] = {};
	printf("\n Enter the range:");
	scanf_s("%d%d", &m, &n);
	d = n - m;
	for (i = m; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			while (int q=0)
			{
				even[q] = i;
			}				
		}
		else if (i % 2 == 0)
		{
			for (int p = 0; p <=d; p++)
				odd[p] = i;
		}
	}
	for (i = 0; i <=d; i++)
	{
		printf("\nE:%d Odd:%d ", even[i], odd[i]);
	}
	/*for (i = 0; i <= n - m; i++)
	{
		printf("\nOdd:%d", odd[i]);
	}*/

	return 0;
}
