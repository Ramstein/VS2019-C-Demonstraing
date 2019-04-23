
#include "pch.h"
#include <iostream>

#include <stdio.h>

int main(){
	int n, i , e=0, o=0;
	printf("Enter the range for printing the even and odd numbers: ");
	scanf_s("%d", &n);
	static int even[300];
	static int odd[300];
	for (i = 0; i <= n; i++) {
		if (i % 2 == 0) {
			even[e] = i;
			e++;
		}else {
			odd[o] = i;
			o++;
		}
	}
	for (i = 0; i <= n/2; i++) {
		printf("Even[%d]: %d ,  Odd[%d]: %d\n", (i + 1), even[i], (i + 1), odd[i]);
	}
	return 0;
}