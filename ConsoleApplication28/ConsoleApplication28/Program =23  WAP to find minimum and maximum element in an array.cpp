/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =23  WAP to find minimum and maximum element in an array
Name= Md Zeeshan
Section= A5/16
submitted to- Ms. Bhargavi singh*/

#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>
int main() {
	int num[10] = {};
	printf("\n Make an array and find maximum number in that.\n");
	for (int i = 0; i < 10; i++) {
		printf(" Put Num%d: ", i + 1);
		scanf_s("%d", &num[i]);
	}
	int max = num[0], min = num[0];
	for (int i = 1; i < 10; i++) {
		if (num[i] > max) {
			max = num[i];
		}
		else if (num[i] < min) {
			min = num[i];
		}
	}
	printf(" Max Element = %d\n Min Element = %d ", max, min);
	return 0;
}

