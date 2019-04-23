// ConsoleApplication61.cpp : This file contains the 'main' function. Program execution is and ends there.
//

#include "pch.h";
#include <iostream>
#include <stdio.h>
#include<string.h>

int main(){
	char string[100];
	int i, mid, end, len = 0;
	printf("Enter a string: ");
	gets_s(string);

	while (string[len] != '\0')
		len++;

	end = len - 1;
	mid = len / 2;

	for (i = 0; i < mid; i++){
		if (string[i] != string[end]){
			printf("Not a palindrome.\n");
			break;
		}end--;
	}if (i == mid)
		printf("Palindrome.\n");
	return 0;
}