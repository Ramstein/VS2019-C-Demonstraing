// ConsoleApplication49.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdio.h>
#include"pch.h"
#include<conio.h>

int main() {
	
	FILE *fp;
	char ch;
	int noc=0, nol=1, now=1;

	fopen_s(&fp,"Text.txt", "r");
	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) {
			break;
		}
		noc++;
		if (ch == '\n') {
			nol++;
		}
		if (ch == '\t') {
			//not;
		}
		if (ch == ' ') {
			now++;
		}
	}
	fclose(fp);

	printf("Number of words: %d\nNumber of tabs: %d,", now);
	printf("Number of Newlines: %d, Number of Character: %d", nol, noc);
	return 0;
}