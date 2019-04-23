/*29. W.A.P. to input details of 10 students( name, roll no., percentage). Print the details of the students who score more than 75%*/

#include "pch.h"
#include <iostream>
#include<string>
#include<stdio.h>

struct student {
	char name[30] = { 0 };
	int rollNO = { 0 };
	char branch[10] = { 0 };
	float per = {0};
};
int main() {
	int i = 0, j = 0, n = 0;
	student s[10] = {0};
	student more[10] = {0};
	printf("How many student information you want to store: ");
	scanf_s("%d", &n);
	if (n >= 9) {
		printf("Enter less no of students: ");
	}
	else {
		printf("Enter the details of students: ");
		printf("\nName(String), RollNo(int), branch(String), Percentage(float)");
		fflush(stdin);
		for (i = 0; i < n; i++) {
			gets_s(s[i].name);
			scanf_s("%d", &s[i].rollNO);
			gets_s(s[i].branch);
			scanf_s("%f", &s[i].per);
		}
		printf("Printing the details of all the students: ");
		printf("\nName(String), RollNo(int), branch(String), Percentage(float)");
		for (i = 0; i < n; i++) {
			printf("%s", s[i].name);
			printf("   %.2d   ", s[i].rollNO);
			printf("%s", s[i].branch);
			printf("   %.2f   \n", s[i].per);

			if (s[i].per > 75) {
				more[j] = s[i];
				j++;
			}
		}
		printf("\nPrinting more than 75per acquired students: ");
		printf("\nName(String), RollNo(int), branch(String), Percentage(float)");
		for (i = 0; i < j; i++) {
			puts(more[i].name);
			printf("   %.2d   ", more[i].rollNO);
			puts(more[i].branch);
			printf("   %.2f   \n", more[i].per);
		}
	}
	return 0;
}
