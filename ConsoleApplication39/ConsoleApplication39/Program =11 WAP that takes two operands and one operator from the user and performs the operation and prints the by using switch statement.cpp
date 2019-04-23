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
	int operand1, operand2, result1 = 0, result2 = 0;
	char op;
	printf("It takes two operands and one operator from the user and performs the operation.\n Enter operator(+, -, *, /, %, <, >, !, ^, &): ");
	scanf_s("%c", &op);
	printf("\n Put your operands: ");
	scanf_s("%d%d", &operand1, &operand2);
	switch (op)
	{
	// Airthmetic Operator
	case '+':
		result1 = operand1 + operand2;
		break;
	case '-':
		result1 = operand1 - operand2;		
		break;
	case '*':
		result1 = operand1 * operand2;
		break;
	case '/':
		result1 = operand1 / operand2;
		break;
	case '%':
		result1 = operand1 % operand2;
		break;
	// Bitwises operators
	case '&':
		result1 = operand1 & operand2;
		break;
	case '|':
		result1 = operand1 | operand2;
		break;
	case '^':
		result1 = operand1 ^ operand2;
		break;
	case '<':
		result1 = operand1 < operand2;
		break;
	case '>':
		result1 = operand1 > operand2;
		break;
	case '~':
		result1 = ~operand1;
		result2 = ~operand2;
		break;
	case '!':
		result1 = !(operand1);
		result2 = !(operand2);
		break;
	default:
		printf("Put appropriate  operator and operand.");
	}
	printf("\n Result1= %d", result1);
	printf("\n Result2= %d", result2);
	return 0;
}
