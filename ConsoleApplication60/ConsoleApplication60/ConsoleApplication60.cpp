/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =26  WAP to add and multiply two matrices of mxn*/

#include"pch.h"
#include<iostream>
#include<stdio.h>
int main(){
	int m, n, m2, n2, i, j, sum=0;;
	char cmd;
	printf("\n For adding the matrix put a \nor for multiplying put m : ");
	scanf_s("%c", &cmd);
	//Multiplication
	if (cmd == 'm') {
		printf("Enter size of the mx1 m X n : ");
		scanf_s("%d%d", &m, &n);
		printf("Enter size of the mx2 m X n : ");
		scanf_s("%d%d", &m2, &n2);
		if (m != n2) {
			printf("Unmupltiplicable Matrix.check the size.");
		}
		else {
			/*int r = 8, c = 5;
			int *arr = (int *)malloc(r * c * sizeof(int));
			  *(arr + i*c + j) = count++*/
			int *mx1 = (int *)(malloc(m*n * sizeof(int)));
			int *mx2 = (int*)(malloc(m2*n2 * sizeof(int)));
			int *mul = (int*)(malloc(m*n2 * sizeof(int)));

			printf("\n Now put the elements of matrix 1: \n");
			for (i = 0; i < m; i++) {
				for (j = 0; j < n; j++) {
					printf(" Put [%d] [%d] = ", i, j);
					scanf_s("%d", (mx1 + i * n + j));
				}
			}
			printf("\n Now put the elements of matrix 2: \n");
			for (i = 0; i < m2; i++) {
				for (j = 0; j < n2; j++) {
					printf(" Put [%d] [%d] = ", i, j);
					scanf_s("%d", (mx2 + i * n2 + j));
				}
			}
			printf("it's multiplying.");
			for (i = 0; i < m; i++) {
				for (j = 0; j < n2; j++) {
					for (int k = 0; k < 2; k++) {
						//mul[i][j] = (mx1[i][k] * mx2[k][j]);
						 sum += (*(mx1 + i * n + k)) * (*(mx2 + k * n2 + j));
					}
					*(mul + i * n2 + j) = sum;   // mul[i][j]=sum;
					sum = 0;
				}
			}
			printf("\nMultiplicated Matrix\n");
			for (i = 0; i < m ; i++) {
				for (j = 0; j < n2; j++) {
					printf(" %d", *(mul + i * n2 + j));
				}
				printf("\n");
			}
		}
	//Addition
	}else if (cmd == 'a') {
		printf("Enter size of the matrix m X n : ");
		scanf_s("%d%d", &m, &n);
		int *mx1 = (int *)(malloc(m*n * sizeof(int)));
		int *mx2 = (int *)(malloc(m*n * sizeof(int)));
		int *summation= (int *)(malloc(m*n * sizeof(int)));

		printf("\n Now put the elements of matrix 1: \n");
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				printf(" Put [%d] [%d] = ", i, j);
				scanf_s("%d", (mx1 + i * n + j));
			}
		}
		printf("\n Now put the elements of matrix 2: \n");
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				printf(" Put [%d] [%d] = ", i, j);
				scanf_s("%d", (mx2 + i * n + j));
			}
		}
		printf("it's adding.");
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				(*(summation + i * n + j)) = (*(mx1 + i * n + j)) * (*(mx2 + i * n + j));
			}
		}
		printf("\nAdded Matrix\n");
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				printf(" %d", *(summation + i * n + j));
			}printf("\n");
		}
	}else {
		printf("\n Put a or m nothing extra.");
	}
	return 0;
}
