/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =20 :Convert Binary Number into Decimal number and vice versa:
Name= Md Zeeshan
Section= A5/16
submitted to- Ms. Bhargavi singh*/

#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>

int main(){
	int s1, s2, s3, s4,s5, total;
	float per;
	printf("Enter marks of 5 subjects: ");
	scanf_s("%d%d%d%d%d", &s1,&s2,&s3,&s4,&s5);
	total = s1 + s2 + s3 + s4 + s5;
	per = total / 5;
	printf("\nTotal Marks=%d, \nPercetage=%f", total, per);
	if ((per >= 90) && (per <= 100)) { printf("\nGrade A"); }
	else if ((per >= 80) && (per <= 89)) { printf("Grade B"); }
	else if ((per >= 60) && (per <= 79)) { printf("Grade C"); }
	else if(per<60){ printf("Grade D"); }
	return 0;
}


