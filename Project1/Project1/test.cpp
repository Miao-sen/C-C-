#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <iostream>
using namespace::std;
void Func(int a = 2, int b = 5, int c = 10)
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << endl;
}
void f(int i, int j)
{
	cout << i << endl;
	cout << j << endl;
}

void f(double i, int j)
{
	cout << i << endl;
	cout << j << endl;
	cout << endl;
}

double f(int i, double j)
{
	cout << i << endl;
	cout << j << endl;
	return (i + j);
}
void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
void Swap(int& p1, int& p2)
{
	int tmp = p1;
	p1 = p2;
	p2 = tmp;
}

int main()
{
	//Func();
	//Func(10);
	//Func(10,20);
	//Func(10,20,30);
	//f(5,2);
	//f(2.2, 4);
	//f(6, 5.3);
	int a, b;
	cin >> a ;
	cin >> b ;
	int& c = a;
	printf("%p\n", a);
	printf("%p", c);
	Swap(&a, &b);
	Swap(a, b);

	return 0;

}