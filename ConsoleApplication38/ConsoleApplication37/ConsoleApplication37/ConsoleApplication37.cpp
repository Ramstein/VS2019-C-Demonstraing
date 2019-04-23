/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =28  WAP to implement strlen(), strcpy_s(t,s), strcat(t,s), strcmp(t,s) using functions
Name= Md Zeeshan
Section= A5/16
submitted to- Ms. Bhargavi singh*/
#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>

int strlength(char *);
void strcopy(char *, char *);
void strconcatenate(char *, char *);
void strcompare(char *, char *,int *, int *, int *);

int main()
{
	int len, n;
	char name[20];
	char yourname[20];
	printf(" What do you Want?\n 1. for finding the length.\n 2. for copying,\n 3. for concatenating and\n 4. for comparing \n");
	//printf(" Enter 1,2,3 or 4 : ");
	scanf_s("%d", &n);
	if (n == 1) {
		printf(" Enter a string : ");
		scanf_s("%s", name);
		len = strlength(name);
		printf(" Length of the string = %d", len);
	}
	else if (n == 2) {
		printf("\n Enter your string: ");
		scanf_s("%s", name);
		strcopy(yourname, name);
		printf("your string= %s, copyied one= %s", name, yourname);
	}
	else if (n == 3) {
		printf("\n Enter source string: ");
		scanf_s("%s", name);
		printf("\n Enter target string: ");
		scanf_s("%s", yourname);
		strconcatenate(yourname, name);
		printf("source string= %s, concatenated one= %s", name, yourname);
	}
	else if (n == 4) {
		int i, j, k;
		printf("\n Enter source string: ");
		scanf_s("%s", name);
		printf("\n Enter target string: ");
		scanf_s("%s", yourname);
		strcompare(yourname, name, &i, &j, &k);
		printf("source string compared= %d,\n source & target compared = %d,\n target and Ramstein comapared ", i, j, k);
	}
	else { printf("Put 1,2,3 or 4."); }
	return 0;
}
int strlength(char *s) {
	int length = 0;
	length=strlen(s);
	return(length);
}
void strcopy(char *s, char *s1) {
	strcpy_s(s, 30, s1);
}
void strconcatenate(char *s, char *s1) {
	strcat_s(s,30, s1);
}
void strcompare(char *s, char *s1, int *i, int *j, int *k) {
	*i=strcmp(s, s);
	*j = strcmp(s, s1);
	*k = strcmp(s1, "Ramstein");
}