/*PROBLEM SOLVING THROUGH PROGRAMMING IN C
Program =29  definne a structure datatype train_info
Name= Md Zeeshan
Section= A5/16
submitted to- Ms. Bhargavi singh*/

#include"pch.h"
#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>

//void linkfloat();																														9
//struct exact_departure {
//	int h;
//	int m;
//};
//struct exact_arrival {
//	int h;
//	int m;
//};
//struct time {
//	struct exact_arrival a[50];
//	struct exact_departure d[50];
//};
struct train_info {
	int no;
	char name[50][20];
	char start_station[50][20];
	char end_station[50][20];
	int ah;
	int am;
	int dh;
	int dm;
	//struct time {
	//	struct exact_arrival {
	//		int h;
	//		int m;
	//	};
	//	struct exact_departure {
	//		int h;
	//		int m;
	//	};
	//};
};
int main() {
	struct train_info t[50];
	//struct time t1[100];
	//struct exact_arrival a[100];
	//struct exact_departure d[100];
	printf("\nEnter Train no, name, start_station, End_station, arrival(Hour, minute), departure(Hour, minute): ");
	for (int i = 0; i < 3; i++) {
		//fflush(stdin);
		scanf_s("%d%s%s%s%d%d%d%d", &t[i].no, &t[i].name, &t[i].start_station, &t[i].end_station, &t[i].ah, &t[i].am, &t[i].dh, &t[i].dm);
	}
	for (int i = 0; i < 3; i++) {
		printf("%d %s %s %s %d %d %d %d", t[i].no, t[i].name, t[i].start_station, t[i].end_station, t[i].ah, t[i].am, t[i].dh, t[i].dm);
	}
	return 0;
}

//void linkfloat() {
//	float a = 0, b;
//	b = &a;
//	a = *b;
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
