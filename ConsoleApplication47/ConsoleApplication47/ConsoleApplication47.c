// ConsoleApplication47.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
#inlcude<stdlib.h>

int main(){
	FILE *fp;
	char ch;
	int noc, nol, now, not;

	fopen_s(&fp, "Text.txt", "r");
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
			not++;
		}
		if (ch == ' ') {
			now++;
		}
	}	

	printf_s("Number of words: %d\nNumber of tabs: %d, Number of Newlines: %d, Number of Character: %d", nob, not, nol, noc);

}