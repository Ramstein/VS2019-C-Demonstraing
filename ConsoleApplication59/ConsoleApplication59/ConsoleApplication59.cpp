/*program = 29.  WAP to print the details of 10 employees (name, ID, Salary, )
and find the print the details of the employees who gains salary than 75,000 */

#include <iostream>
#include<string>
#include<stdio.h>

struct employee {
	char name[30];
	int ID;
	char designation[10];
	float salary;
};
int main() {
	int i, j = 0, n;
	struct employee s[10];
	struct employee HighSalary[10];
	printf("How many epmloyees information you want to store: ");
	scanf_s("%d", &n);
	if (n < 10) {
		printf("Enter less no of employee: ");
	}
	else {

		printf("Enter the details of employees: ");
		printf("\nName(String), ID(int), designation(String), Salary(float)");
		for (i = 0; i < n; i++) {
			gets_s(s[i].name);
			scanf_s("%d", &s[i].ID);
			gets_s(s[i].designation);
			scanf_s("%f", &s[i].salary);
		}
		printf("Printing the details of all the employees: ");
		printf("\nName(String), ID(int), designation(String), Salary(float)");
		for (i = 0; i < n; i++) {
			puts(s[i].name);
			printf("   %d   ", s[i].ID);
			puts(s[i].designation);
			printf("   %f   \n", s[i].salary);

			if (s[i].salary > 75, 000) {
				HighSalary[j] = s[i];
				j++;
			}
		}
		printf("Printing more than 75,000 acquiring  employees: ");
		printf("\nName(String), ID(int), designation(String), Salary(float)");
		for (i = 0; i < j; i++) {
			puts(HighSalary[i].name);
			printf("   %d   ", HighSalary[i].ID);
			puts(HighSalary[i].designation);
			printf("   %f   \n", HighSalary[i].salary);
		}
	}
	return 0;
}
//input data haven’t been shown due to overhead 0f spamember.
Printing the details of all the employees :
Name(String), ID(int), designation(String), salary(float)
Ramstein w	1654	Secretory	60000
Gopher t	6451	President	160000
BC			4646	member		55000
Amar		4665	Joint Secretory	70000
Thomas		5455	Treasure	73000
Whormeir k	5555	Vice President	900000
Vandeuver	6625	Treasure	66000
Whormeir	6848	Treasure	62000
Walter		5445	Treasure	70000
Makrov		1654	Treasure	58000

Printing more than 75 % acquired employees :
Name(String), ID(int), designation(String), salary(float)
Gopher t	6451	President	160000
Whormeir k	5555	Vice President	900000
