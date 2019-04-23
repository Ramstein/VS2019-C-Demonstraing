#include<stdio.h>



*using namespace std;


#define MM_1(x,y) x*y
#define MM_2(x,y) (x*y)
#define MM_3(x,y) (x)*(y)

inline int MPLY(int x, int y) { return x * y; }

int& func(int& a) {
	int i = a;
	return i;
}
int f(int);
int increment(int); */


int main()
{
	/*//int i, j;

	/*for (i = 0; i <= 4; i++)
		std::cout << "Hello World!\n";
		j = increment(i);
	printf("%d", j);

	int z;
	struct
	{
		short s[8];
		union MyUnion
		{
			double x;
			float y;
			long z;
		} u;
	} t;
	z = sizeof(t);
	printf("%d\n", z);

		int k = 35, *z, *y;
		//y = z = &k;
		//*z++ = *y--;
		k++;
	printf("k=%d z=%p y=%p", k, z, y);


	int arr[1] = { 10 };
	printf("%d\n\n", arr[1]);



	std::vector<int> vec;
	for (int i = 1; i < 5; i++)vec.push_back(i);
	vec.resize(3);
	vec.resize(4, 10);
	vec.resize(5);

	for (int i = 0; i < vec.size(); i++)
		std::cout << ' ' << vec[i];
	std::cout << '\n';

	int r, n = 1;
	r = f(n);
	printf("%d\n", r);


	string str1 = "???";
	string str2 = "???";

	str1 = "bat", str2 = "cat";
	cout << str1 << ((strcmp(str1, str2) < 0) ? "Less than " :
		((strcmp(str1, str2) > 0) ? "Greater than " : "Equal to "))
		<< str2 << endl;

	str1 = "rat", str2 = "cat";
	cout << str1 << ((strcmp(str1, str2) < 0) ? "Less than " :
		((strcmp(str1, str2) > 0) ? "Greater than " : "Equal to "))
		<< str2 << endl;

	str1 = "hat", str2 = "hat";
	cout << str1 << ((strcmp(str1, str2) < 0) ? "Less than " :
		((strcmp(str1, str2) > 0) ? "Greater than " : "Equal to "))
		<< str2 << endl;*/


		/*int array[] = { 10,20,30,40 };
		printf("\n\n%d\n\n", -2[array - 2]);


		char str[] = "Hello World";
		printf("%d", printf("%s", str));


		printf("Enter any text: ");
		printf("\n");
		reverse();
		printf("\n");
		return 0;
		int ad, bd;
		const int* p = &ad;
		//const int& r = a;
		p = &bd;
		r = bd;


		cout << Add(5, 6, 7) << " ";
		//cout << Add(5.5, 6.6);
		return 0;


	int a = 16;
		int& b = func(a);
		a = sqrt(sqrt(sqrt(sqrt(a))));
		cout << b + a << endl;
		printf("%d", b);
		return 0;


		int a = 3, b = 4;
		cout << "MM_1:" << MM_1(MM_1(a + 1, b - 1), a + b) << endl;
		cout << "MM_2:" << MM_2(MM_2(a + 1, b - 1), a + b) << endl;
		cout << "MM_3:" << MM_3(MM_3(a + 1, b - 1), a + b) << endl;
		cout << "MPLY:" << MPLY(MPLY(a + 1, b - 1), a + b) << endl;

		/*char* p = new char;
		*p = 'A';
		cout << *p << endl;
		delete p;

		p = NULL;
		delete p;


		void* operator new(size_t, char);
		void operator delete(void *);



		void* operator new(size_t, char);
		void operator delete(void *);


		void* operator new(size_t, char);void operator delete(void *);

	/*int Add(int x, int y, int z) {
		return x + y + z;
	}
	/*double Add(double x, double y = 0, double z) {
		return x + y;
	}*/
	//void reverse() {
	//	int c;
	//	if ((getc(stdin)) !='\n')
	//		reverse();
	//	putc(c, stdout);
	//}

	/*int increment(int i) {
		static int count = 0;
		count = count + i;
		return(count);
	}

	int f(int n = 1) {
		static int i = 1;
		if (n >= 5)
			return n;
		n = n + i;
		i++;
		return f(n);

	}

	int strcmp(string& str1, string& str2) {
		return (0);
	}*/
}





//
	//	/*int i, m, n,y=100000;
	//	int num[7] = {};
	//	int x[7] = {};
	//
	//	printf("\nEnter 7 digit number: ");
	//	scanf_s("%d", &n);*/
	//
	//	/*for(i=0; i<10; i++)
	//		num[i] = n % y;
	//		x[i] = n / y;
	//		n = num[i+1];
	//		y = y / 10;*/
	//		/*
	//			num[0] = n % 1000000;
	//			x[0] = n / 1000000;
	//
	//			num[1] = num[0] % 100000;
	//			x[1] = num[0] / 100000;
	//
	//			num[2] = num[1] % 10000;
	//			x[2] = num[1] / 10000;
	//
	//			num[3] = num[2] % 1000;
	//			x[3] = num[2] / 1000;
	//
	//			num[4] = num[3] % 100;
	//			x[4] = num[3] / 100;
	//
	//			num[5] = num[4] % 10;
	//			x[5] = num[4] / 10;
	//			if(num[5]>100)
	//				num[6] = num[5] % 10;
	//				x[6] = num[5] / 1;
	//			printf("\n");
	//			for (m = 0; m < 7; m++)
	//				printf("%d ", num[m]);
	//			printf("\n");
	//			for (m = 6; m >= 0; m--)
	//				printf("%d", x[m]);*/
	//				/*double fib[100] = { 0,1 };
	//				int m, n;
	//				printf("\n Enter the range; ");
	//				scanf_s("%d%d", &m, &n);
	//
	//
	//				for (int i = 2; i <= 99; i++)
	//				{
	//					fib[i] = fib[(i - 1)] + fib[(i - 2)];
	//
	//				}
	//				for (int i = m; i <= n; i++)
	//					printf("fib%d: %lf\n", i, fib[(i)]);*/
	//					/*
	//					double dig[10], no[10];
	//					double square[10][10];
	//					double sq = 0;
	//					int digit = 0;
	//					int i = 0,j=0,k=0, m = 0,q=0,num=0;
	//					for (i = 55; i <= 100; i++)
	//						num = k = i;
	//						for (; i != 0; digit++)
	//
	//							i = i / 10;
	//						for ( m = 0; m < digit; m++)
	//						{
	//							int y = 10;
	//							no[m] = num % y;
	//							dig[m] = num / y;
	//							num = dig[m];
	//							y = y / 10;
	//							printf("\n%lf", dig[5]);
	//						}*/
	//						/*for (q  = 0; q <= digit; q++)
	//						{
	//							sq = sq + pow(no[q], 2);
	//							square[k][j] = sq;
	//							j++;
	//
	//						}
	//
	//						for ( int r = 0; r < 10; r++)
	//						{
	//							for ( int s = 0; s < 10; s++)
	//							{
	//								printf("\n%lf", square[r][s]);
	//							}
	//						}*/
	//						/*int number, originalNumber, remainder, result = 0;
	//
	//						printf("Enter a three digit integer: ");
	//						scanf_s("%d", &number);
	//
	//						originalNumber = number;
	//
	//						while (originalNumber != 0)
	//						{
	//							remainder = originalNumber % 10;
	//							result += remainder * remainder*remainder;
	//							originalNumber /= 10;
	//						}
	//
	//						if (result == number)
	//							printf("%d is an Armstrong number.", number);
	//						else
	//							printf("%d is not an Armstrong number.", number);
	//
	//						return 0;*/
	//						//int number, originalNumber, remainder=1, result = 0;
	//						//int i = 0;
	//						//double armstrong[100];
	//						//for ( i = 0; i <90; i++)
	//						//{
	//						//	for (originalNumber = i; originalNumber != 0; )
	//						//		remainder = originalNumber % 10;
	//						//		result += remainder * remainder*remainder;
	//						//		originalNumber /= 10;
	//
	//						//	if (result == originalNumber)
	//						//		//printf("%d is an Armstrong number.", number);
	//						//		armstrong[i] = result;
	//						//}
	//						//
	//						//for (int i = 0; i < 90; i++)
	//						//	printf("%lf\n", armstrong[i]);
	//					/*int number, temp, digit1, digit2, digit3, digit4;
	//
	//					printf("Print all Armstrong numbers between 1 and 1000:\n");
	//					number = 001;
	//					while (number <= 90000)
	//					{
	//						digit1 = number - ((number / 10) * 10);
	//						digit2 = (number / 10) - ((number / 100) * 10);
	//						digit3 = (number / 100) - ((number / 1000) * 10);
	//						digit4 = (number / 1000) - ((number / 10000) * 10);
	//						temp = pow(digit1 ,3) + pow(digit2 ,3) + pow(digit3,3)+pow(digit4,3);
	//						if (temp == number)
	//						{
	//							printf("\n Armstrong no is:%d", temp);
	//						}
	//						number++;
	//					}
	//						*/
