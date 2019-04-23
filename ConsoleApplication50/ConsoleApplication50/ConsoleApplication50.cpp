// ConsoleApplication50.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main() {
	FILE *fp;
	char ch;
	char words[200], wo[300];
	int noc = 0, nol = 1, now = 1 , not1 = 0, m=0;

	fopen_s(&fp, "Text.txt", "r");

	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) {
			break;
		}
		wo[noc] = ch;
		noc++;
		if (ch == '\n') {
			nol++;
		}
		if (ch == '\t') {
			not1;
		}
		if (ch == ' ') {
			now++;
			for (int i = m; i <= noc; i++) {
				words[i] = ;
				noc = m;
			}
		}
	}
	fclose(fp);

	printf("Number of words: %d\nNumber of tabs: %d,", now, not1);
	printf("\nNumber of Newlines: %d,\n Number of Character: %d", nol, noc);
	for (int i = 0; i < 77; i++) {
		printf("%c", words[i]);



	/*int i=0, j=0,m ;
	for (i=1; i <= 6; i++) {
		for (j=m; j <= i; j++) {
			printf("%d", j);
			j = m;
		}printf("\n");
	
	}*/
		return 0;
}