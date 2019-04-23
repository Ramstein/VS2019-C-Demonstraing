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

int main()
{
	double c, f;
	char ch;
	printf("\nFor Conversion from celsius to fahrenhite put f\nOr for fahrenhite to celsius put c: ");
	scanf_s("%c", &ch);
	if (ch == 'f') {
		printf("\n Enter celsius value: ");
		scanf_s("%lf", &c);
		f = (1.8*c) + 32;
		printf("Fahrenhite=%f", f);
	}
	else if (ch == 'c'){
		printf("\n Enter Fahrenhite value: ");
		scanf_s("%lf", &f);
		c = (f - 32) / 1.8;
		printf("Celsius=%f", c);
	}
	return 0;
}
