/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =7  WAP to find greatest of three numbers:
Name= Md Zeeshan
Section= A5/16
submitted to- Ms. Bhargavi singh*/

#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float x, y, z, m;
	printf("\nEnter three numbers\nNum1: ");
	scanf_s("%f", &x);
	printf("\nNum2: ");
	scanf_s("%f", &y);
	printf("\nNum3: ");
	scanf_s("%f", &z);
	m = ((x > y) && (x > z) ? x : ((y > z) ? y : z));
	printf("\nMaxm= %f", m);
	return 0;
}
