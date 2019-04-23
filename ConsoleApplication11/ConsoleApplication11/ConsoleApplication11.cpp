/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =7  WAP that checks whether two number entered by user are equal or not:
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
	float i, j;
	printf("\nEnter two numbers to check whether they are equal or not\nNum1:  ");
	scanf_s("%f", &i);
	printf("\nNum1:  ");
	scanf_s("%f", &j);
	if (i == j){
		printf("\n %f and %f are equal numbers",i,j);
	}
	else if (i != j){
		printf("\n %f and %f are not equal numbers", i, j);
	}
	return 0;
}
