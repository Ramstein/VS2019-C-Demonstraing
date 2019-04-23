/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =27  WAP to Find SumDiagonal of diagonal elements of an mxn matrices
Name= Md Zeeshan
Section= A5/16
submitted to- Ms. Bhargavi singh*/
#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>
int main()
{
	int m, n, i, j;
	printf("\nIt finds Sum of diagonal elements of two an matrices: ");
	printf(" Put the rows and column of the matrix: \n Rows: ");
	scanf_s("%d", &m);
	printf(" Column: ");
	scanf_s("%d", &n);
	//int* mx1 = (int*)malloc(m * sizeof(int));               //Dynamic 1D memory allocation
	//int *mx2 = (int *)malloc(m * n * sizeof(int));      //Dynamic 2D memory allocation

	int *mx1 = (int *)malloc(m * n * sizeof(int));
	int sum = 0;
	printf("\n Now put the elements of matrix 1: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf(" Put %d %d = ", i, j);
			scanf_s("%d", (mx1 + i * n + j));
		}
	}
	/*printf("\n Now put the elements of matrix 2: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf(" Put %d %d = ", i, j);
			scanf_s("%d", (mx2 + i * n + j));
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("  %d ", *(mx1 + i * n + j));
		}		printf("\n");
	}*/
	printf("it's adding.");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (i == j) {
				//*(SumDiagonal + i * n + j) = *(mx1 + i * n + j) + *(mx2 + i * n + j);
				//sum += mx1[i*n + j] + mx2[i*n + j];
				sum += mx1[i*n + j];
			}
		}
	}
	printf("\n  Sum of Diagonals = %d", sum);
	return 0;
}