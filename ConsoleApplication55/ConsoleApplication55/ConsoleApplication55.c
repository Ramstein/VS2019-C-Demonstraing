#include<stdio.h>
#include<conio.h>
#include"pch.h"

int main() {
	FILE *fp1, *fp2;
	int ch1, ch2;
	char fname1[40], fname2[40];

	printf_s("Enter name of first file :");
	getc(fname1);

	printf_s("Enter name of second file:");
	gets(fname2);

	fopen_s(&fp1, fname1, "r");
	fopen_s(&fp2, fname2, "r");

	if (fp1 == NULL) {
		printf("Cannot open %s for reading ", fname1);
		//exit(1);
	}
	else if (fp2 == NULL) {
		printf("Cannot open %s for reading ", fname2);
		//exit(1);
	}
	else {
		ch1 = fgetc(fp1);
		ch2 = fgetc(fp2);

		while ((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2)) {
			ch1 = fgetc(fp1);
			ch2 = fgetc(fp2);
		}

		if (ch1 == ch2)
			printf("Files are identical n");
		else if (ch1 != ch2)
			printf("Files are Not identical n");

		fclose(fp1);
		fclose(fp2);
	}
	return (0);
}