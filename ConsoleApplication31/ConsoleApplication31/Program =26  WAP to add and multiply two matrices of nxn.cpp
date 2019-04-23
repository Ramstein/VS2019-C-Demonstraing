/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =26  WAP to add and multiply two matrices of nxn
Name= Md Zeeshan
Section= A5/16
submitted to- Ms. Bhargavi singh*/

#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>
int main(){
	int n, i, j;
	char cmd;
	printf("\n For adding the matrix put a \nor for multiplying put m : ");
	scanf_s("%c", &cmd);
	int sum[5][5] = {};
	int mul[5][5] = {};
	int mx1[5][5] = {};
	int mx2[5][5] = {};
	printf("\n Now put the elements of matrix 1: \n");
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 2; j++) {
			printf(" Put %d %d = ", i, j);
			scanf_s("%d", &mx1[i][j]);
		}
	}
	printf("\n Now put the elements of matrix 2: \n");
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 2; j++) {
			printf(" Put %d %d = ", i, j);
			scanf_s("%d", &mx2[i][j]);
		}
	}
	if (cmd == 'm') {
		printf("it's multiplying.");
		for (i = 0; i <= 2; i++) {
			for (j = 0; j <= 2; j++) {
				mul[i][j] = (mx1[i][j] * mx2[i][j]) + (mx1[i][j + 1] * mx2[i + 1][j]) + (mx1[i][j + 2] * mx2[(i + 2)][j]);
				/*for (int k = 0; k <= 2; k++) {
					mul[i][j] = (mx1[i][k] * mx2[k][j]);
				}*/
			}
		}
		printf("\nMultiplicated Matrix\n");
		for (i = 0; i <= 2; i++) {
			for (j = 0; j <= 2; j++) {
				printf(" %d", mul[i][j]);
			}
			printf("\n");
		}
	}
	else if (cmd == 'a') {
		printf("it's adding.");
		for (i = 0; i <= 2; i++) {
			for (j = 0; j <= 2; j++) {
				sum[i][j] = mx1[i][j] + mx2[i][j];
			}
		}
		printf("\nAdded Matrix\n");
		for (i = 0; i <= 2; i++) {
			for (j = 0; j <= 2; j++) {
				printf(" %d", sum[i][j]);
			}
			printf("\n");
		}
	}
	else {
		printf("\n Put a or m nothing extra.");
	}
	return 0;
}
