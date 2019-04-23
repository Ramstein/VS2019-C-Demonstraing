/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program = 25  WAP to sort the elements of an array using bubble sort technique
Name= Md Zeeshan
Section= A5/16
submitted to- Ms. Bhargavi singh*/

#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>
int main() {
	int sort[100];
	int i, j, k, n;
	printf("\n How many array elements you want to put in: ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		printf("\n Enter %d element: ", i + 1);
		scanf_s("%d", &sort[i]);
	}
	//using Bubble sort technique for sorting this array out in ascending order
	for (i = 0; i < n-1; i++) {
		for (j = 0; j < n-1-i ; j++) {
			if (sort[j] > sort[j + 1]) {  //for ascending order
				k = sort[j];
				sort[j] = sort[j + 1];
				sort[j + 1] = k;
			}
		}
	}
	printf("\nSorted list in ascending order:\n");
	for (i = 0; i < n; i++) {
		printf("%d  ", sort[i]);
	}
	return 0;
}