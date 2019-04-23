#include "pch.h"
#include <iostream>
#include<string.h>
int main()
{
	//int  noc=0, nol=1, nob=0;
	//FILE *fp;
	//char ch;
	//fopen_s(&fp,"Text.txt", "r");
	//while (1) {
	//	ch = getc(fp);
	//	if (ch == EOF) {
	//		break;
	//	}
	//	noc++;
	//	if (ch == '\n') {
	//		nol++;
	//	}
	//	if (ch == ' ') {
	//		nob++;
	//	}
	//	
	//}
	//printf("noc=%d, nol=%d, nob=%d;", noc, nol, nob);


	float x, sum = 0;
	printf("Enter a number: ");
	scanf_s("%f", &x);
	sum = 1 - (pow(x, 2) / 2) + (pow(x, 4) / 24) - (pow(x, 6) / 720) + (pow(x, 8) / 40320) - (pow(x, 10) / 3628800);
	printf("%f", sum);
	return 0;

	////Calculating the simple interest
	//float p, n, r, A, ci, si;
	//printf("\n Enter the principal,time, and rate of interest: ");
	//scanf_s("%f%f%f", &p, &n, &r);
	//si = p * n*r;
	//printf("Simple interest=%f", si);
	//return 0;

}





