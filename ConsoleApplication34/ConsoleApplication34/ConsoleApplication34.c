/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =30 WAP to swap two elements using concepts of pointers in array
Name= Md Zeeshan
Section= A5/16
submitted to- Ms. Bhargavi singh*/

#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>


int main()
{
	FILE *fp1;
	char ch1[100][30];
	char ch2[100][30];
	char letter1, letter2;
	int nol1 = 0, not1 = 0, nob1 = 0, noc1 = 0, nol2 = 0, not2 = 0, nob2 = 0, noc2 = 0;
	fp1 = fopen_s("Text.txt", "r");
	//fp2 = fopen_s("Text1.txt");

	for (int i = 0; i < 1000; i++) {
		letter1 = fgetc(fp1);
		if (letter1 = EOF)
			break;
		noc1++;
		if (letter1 = ' ')
			nob1++;
		if (letter1 = '\n')
			nol1++;
		if (letter1 = '\t')
			not1++;
	}

	printf("noc1=%d, nob1=%d, not1=%d, nol1=%d", noc1, nob1, not1, nol1);
}
