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
	int find, k=0;
	printf("\n Make an array and search an element in that.\n");
	for (int i = 0; i < 10; i++) {
		printf(" Put Num%d: ", i + 1);
		scanf_s("%d", &num[i]);
	}
	printf(" What element do you want to search: ");
	scanf_s("%d", &find);
	for (int i = 0; i < 10; i++) {
		if (num[i] == find) {
			printf("\n %d is +nt at %d location in the array.", find, i + 1);
			k++;
			break;
		}
	}
	if (k !=1) {
		printf("\n %d is not +nt in the array.", find);
	}
	return 0;
}

