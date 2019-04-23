/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =20 :Convert Binary Number into Decimal number and vice versa:
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
		printf("%d\n", sort[i]);
	}

	//int array[100], n, c, d, swap;

	//printf("Enter number of elements\n");
	//scanf_s("%d", &n);

	//printf("Enter %d integers\n", n);

	//for (c = 0; c < n; c++)
	//	scanf_s("%d", &array[c]);

	//for (c = 0; c < n - 1; c++)
	//{
	//	for (d = 0; d < n - c - 1; d++)
	//	{
	//		if (array[d] > array[d + 1]) /* For decreasing order use < */
	//		{
	//			swap = array[d];
	//			array[d] = array[d + 1];
	//			array[d + 1] = swap;
	//		}
	//	}
	//}

	//printf("Sorted list in ascending order:\n");

	//for (c = 0; c < n; c++)
	//	printf("%d\n", array[c]);

	return 0;

}