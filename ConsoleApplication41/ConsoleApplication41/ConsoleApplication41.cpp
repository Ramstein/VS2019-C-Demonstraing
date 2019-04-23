/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =30 WAP to swap two elements using concepts of pointers in array
Name= Md Zeeshan
Section= A5/16
submitted to- Ms. Bhargavi singh*/
#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>
int j, k, l, m, n, o;
int w1 = 0, w2 = 0;
int main()
{
	FILE *fp1, *fp2;
	char ch1[100][30], ch2[100][30];
	char word1[20], word2[20];
	char letter1, letter2;
	int nol1 = 0, not1 = 0, nob1 = 0, noc1 = 0, nol2 = 0, not2 = 0, nob2 = 0, noc2 = 0;
	fopen_s(&fp1,"Text.txt", "r");
	fopen_s(&fp2,"Text1.txt", "r");
	for (int i = 0; i < 10; i++) {
		letter1 = fgetc(fp1);
		if (letter1 == EOF)
			break;
		noc1++;
		word1[i] = letter1;
		if (letter1 == ' ')
			nob1++;
				for (k = 0; k <= noc1 - w1;k++ ) {
					ch1[k][30] = word1[k];
				}
			w1 = noc1;
		if (letter1 == '\n')
			nol1++;
		if (letter1 == '\t')
			not1++;

	}
	printf("\nnoc1=%d, nob1=%d, not1=%d, nol1=%d", noc1, nob1, not1, nol1);
	for (int i = 0; i < 10; i++) {
		for (k = 0; k <1; k++) {
			printf("\n%s", &ch1[i][k]);
		}
	}

	for (int i = 0; i < 1000; i++) {
		letter2 = fgetc(fp2);
		if (letter2 == EOF)
			break;
		noc2++;
		if (letter2 == ' ')
			nob2++;
			w2 = noc2;
			for (int i = 0; i < w2; i++) {
				//ch2[i][30]=
		}
		if (letter2 == '\n')
			nol2++;
		if (letter2 == '\t')
			not2++;

		//j=(strcmp_s(ch1[i], ch2[i]);
	}
	printf("\nnoc2=%d, nob2=%d, not2=%d, nol2=%d", noc2, nob2, not2, nol2);
	return 0;
}
