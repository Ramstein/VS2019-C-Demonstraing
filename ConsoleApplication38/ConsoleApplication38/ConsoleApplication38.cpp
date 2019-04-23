/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =11 WAP that takes two operands and one operator from the user and performs the operation and prints the by using switch statement
Name= Md Zeeshan
Section= A5/16
submitted to- Ms. Bhargavi singh*/
#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>

int main()
{
	int operand1, operand2, result;
	char operate;
	printf(" takes two operands and one operator from the user and performs the operation.\n Put your operands: ");
	scanf_s("%d%d", &operand1, &operand2);
	printf("\n Enter operator(+,-,*,/,%,<<,>>,!,^,&): ");
	scanf_s("%c", &operate);
	switch (operate)
	{
	case '+':
		result = operand1 + operand2;
	case '-':
		result = operand1 - operand2;
	case '*':
		result = operand1 * operand2;
	case '/':
		result = operand1 / operand2;
	case '%':
		result = operand1 % operand2; 
	case '<<':
		result = operand1 << operand2;
	case '>>':
		result = operand1 >> operand2;
	case '!':
		result = !(operand1)  * !(operand2);
	case '^':
		result = operand1 ^ operand2;
	case '&':
		result = operand1 & operand2;
	
	default: 
		break;
	}

}
