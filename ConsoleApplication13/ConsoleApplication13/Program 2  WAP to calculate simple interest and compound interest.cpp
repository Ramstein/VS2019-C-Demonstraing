/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =2  WAP to calculate simple interest and compound interest:
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
	//Calculating the simple interest
	float p, n, r, A, ci, si;
	printf("\n Enter the principal,time, and rate of interest: ");
	scanf_s("%f%f%f", &p, &n, &r);
	si = p * n*r;
	printf("Simple interest=%f", si);
	//calculating the compund interest
	A = p * pow((1 + r / 100), n);
	ci = A - p;
	printf("\nCompound interest=%f", ci);
	return 0;
}
