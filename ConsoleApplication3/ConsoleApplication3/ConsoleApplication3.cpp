

#include "pch.h"
#include <iostream>
#include<conio.h>
#include<math.h>


int main()
{
		  

	//for (int i = 0; i < 100; i++)
		//printf("|nHellow world!");

	//Calculating the simple interest
	int p, n, r,A;
	float ci;
	float si;
	printf("\n Enter the principal,time, and rate of interest: ");
	scanf_s("%d%d%d", &p, &n, &r);
	si = p * n*r;
	printf("Simple interest=%f", si);
	//calculating the compund interest
	
	A = p * pow((1 + (r / 100)), n);
	ci = A-p;

	printf("\nCompound interest=%f", ci);





	return 0;
	
}
