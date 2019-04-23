///*PROBLEM SOLVING THROUGH PROGRAMMING IN C
//Program =30 WAP to swap two elements using concepts of pointers in array
//Name= Md Zeeshan
//Section= A5/16
//submitted to- Ms. Bhargavi singh*/
//
//#include"pch.h"
//#include <iostream>
//#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h>
//
//
//int main()
//{
//	FILE *fp1;
//	/*char ch1[100][30];
//	char ch2[100][30];
//	char letter1, letter2;
//	int nol1 = 0, not1 = 0, nob1 = 0, noc1 = 0, nol2 = 0, not2 = 0, nob2 = 0, noc2 = 0;*/
//	fp1 = fopen_s("C:\\New Text Document.txt", "r");
//	//fp2 = fopen_s("Text1.txt");
///*
//	for (int i = 0; i < 1000; i++) {
//		letter1 = fgetc(fp1);
//		if (letter1 = EOF)
//			break;
//		noc1++;
//		if (letter1 = ' ')
//			nob1++;
//		if (letter1 = '\n')
//			nol1++;
//		if (letter1 = '\t')
//			not1++;
//	}
//
//	printf("noc1=%d, nob1=%d, not1=%d, nol1=%d", noc1, nob1, not1, nol1);
//}*/



#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//int main()
//{
//	int num;
//	FILE *fptr;
//	fptr = fopen_s("C:\\New Text Document.txt", "w");
//
//	if (fptr == NULL)
//	{
//		printf("Error!");
//		exit(1);
//	}
//
//	printf("Enter num: ");
//	scanf_s_s_s("%d", &num);
//
//	fprintf(fptr, "%d", num);
//	fclose(fptr);
//
//	return 0;
//}
//int main()
//{
//	int num;
//	FILE *fptr;
//
//	if ((fptr = fopen_s("C:\\program.txt", "r")) == NULL) {
//		printf("Error! opening file");
//
//		// Program exits if the file pointer returns NULL.
//		exit(1);
//	}
//
//	fscanf_s(fptr, "%d", &num);
//
//	printf("Value of n=%d", num);
//	fclose(fptr);
//
//	return 0;
//}
#include <stdio.h>
int i = 0;
int id_chk;
void add();
void details();
void status();
struct rail
{
	int  id, day, month, year, hour, min, seat_no;
	char train[50], name[50], status;
}r[10];

void add()
{
	printf("\n\n============== +Add Records+ ===============\n\n");
	for (i = 0; i <= 9; i++)
	{
		printf("\nEnter Ticket id : ");
		scanf_s("%d", &r[i].id);
		printf("\nEnter Customer's name : ");
		fflush(stdin);
		scanf_s("%s", &r[i].name);
		printf("\nEnter Train name : ");
		fflush(stdin);
		scanf_s("%s", &r[i].train);
		printf("\nEnter Seat Number : ");
		scanf_s("%d", &r[i].seat_no);
		printf("\nEnter date (dd/mm/yy) :");
		scanf_s("%d %d %d", &r[i].day, &r[i].month, &r[i].year);
		printf("\nEnter depature time (hour/minute) : ");
		scanf_s("%d %d", &r[i].hour, &r[i].min);
		printf("\nEnter Confirmation Status (y/n) : ");
		fflush(stdin);
		scanf_s("%c", &r[i].status);
	}
	printf("\n\n==========================================\n\n");

}

void details()
{
	printf("\nEnter ticket Id :\n");
	scanf_s("%d", &id_chk);
	printf("\n\n================== Customers Record ================== \n\n");
	for (i = 0; i <= 9; i++)
	{
		if (id_chk == r[i].id)
		{
			printf("\nTicket id : %d", r[i].id);
			printf("\nName : %s", r[i].train);
			printf("\nTrain name : %s", r[i].name);
			printf("\nSeat number : %d", r[i].seat_no);
			printf("\nDate (dd/mm/yy) : %d / %d / %d", r[i].day, r[i].month, r[i].year);
			printf("\nDepature time (hour/minute) : %d : %d", r[i].hour, r[i].min);
			if (r[i].status == 'Y' || r[i].status == 'y')
				printf("\nConfirmation Status : Confirmed");
			else
				printf("\nConfirmation Status : Waiting");
		}
	}
	printf("\n\n");

}

void status()
{
	printf("\nEnter ticket Id :\n");
	scanf_s("%d", &id_chk);
	printf("\n\n================== Customers Record ================== \n\n");
	for (i = 0; i <= 9; i++)
	{
		if (id_chk == r[i].id)
		{
			if (r[i].status == 'Y' || r[i].status == 'y')
			{
				printf("\nName : %s", r[i].train);
				printf("\nSeat Number : %d", r[i].seat_no);
				printf("\nConfirmation Status : Confirmed");
			}
			else
				printf("\nConfirmation Status : Waiting");
		}
	}
	printf("\n\n");

}


int main()
{
	int i, ch;
	printf("==================Welcome to railway sevices================= \n\n");
	while (1)
	{
		printf("1.Add Details : \n");
		printf("2.Ticket number id (Check details): \n");
		printf("3.Ticket number (Check Status): \n");
		printf("4.Exit : \n ");
		printf("\nEnter ur choice : \n");
		scanf_s("%d", &ch);
		switch (ch)
		{
		case 1:
			add();
			break;
		case 2:
			details();
			break;
		case 3:
			status();
			break;
		case 4:
			break;
		default:
			printf("Invalid option");
			break;
		}
	}
	return 0;
}
