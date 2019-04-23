/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =3  WAP to calculate circumference and Area of a circle:
Name= Md Zeeshan
Section= A5/16
submitted to- Ms. Bhargavi singh*/

#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.1415

int main()
{
	float r, a, p;
	printf("\nEnter the radius: ");
	scanf_s("%f", &r);
	a = PI * pow(r, 2);
	p = 2 * PI*r;
	printf("\nArea=%f,  Circumference=%f", a, p);
	return 0;
}
