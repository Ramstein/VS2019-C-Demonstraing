#include<stdio.h>
#include"pch.h"
#include<stdlib.h>
#include<iostream>

int main() {
	FILE *fp1, *fp2;
	int ch1, ch2;

	printf("Fetching Text1.txt file :");
	fopen_s(&fp1, "Text1.txt", "r");

	printf("Fetching Text1.txt file :");
	fopen_s(&fp2, "Text2.txt", "r");

	if (fp1 == NULL) {
		printf("\nCannot open Text1 for reading. ");
		exit(1);
	}
	else if (fp2 == NULL) {
		printf("\nCannot open Text2 for reading. " );
		exit(1);
	}
	else {
		ch1 = fgetc(fp1);
		ch2 = fgetc(fp2);

		while ((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2)) {
			ch1 = fgetc(fp1);
			ch2 = fgetc(fp2);
		}

		if (ch1 == ch2)
			printf("\nFiles are identical \n");
		else if (ch1 != ch2)
			printf("\nFiles are Not identical \n");

		fclose(fp1);
		fclose(fp2);
	}
	return (0);
}