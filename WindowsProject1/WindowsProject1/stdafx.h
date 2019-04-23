// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>

// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>


// reference additional headers your program requires here


#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

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