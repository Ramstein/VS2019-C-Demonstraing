/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =31 :GET  MARKS OF 5 SUBJECTS AND GET THE PERCENTAGE AND GRADE BASED ON THAR  :
Name= Md Zeeshan
section-A5/16
submitted to- Ms. Bhargavi singh*/

#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>
int BinaryToDecimal(long long n);
int main()
{
	long long n;
	int l = 0, i = 0;
	char c;
	int binary[200] = {};
	printf("\nFor binary to decimal put d\nOr for decimal to binary put b : ");
	scanf_s("%c", &c);
	if (c == 'b'){
		printf("\n Enter a Decimal number:");
		scanf_s("%lld", &n);
		if (n < 0){
			n = (-n);
			l = 1;}
		while (n >= 1){
			// storing remainder in binary array
			binary[i] = n % 2;
			n = n / 2;
			i++;}
		if (l == 1){
			binary[i] = 1;}
		else {
			binary[i] = 0;}
		for (i; i >= 0; i--)
			printf(" %d", binary[i]);}
	if(c =='d'){
		printf("Enter a binary number: ");
		scanf_s("%lld", &n);
		printf("%lld in binary = %d in decimal", n, BinaryToDecimal(n));}
	return 0;
}
int BinaryToDecimal(long long n){
	int Number = 0, i = 0, rem;
	while (n != 0){
		rem = n % 10;
		n /= 10;
		Number += rem * pow(2, i);
		++i;}
	return Number;
}