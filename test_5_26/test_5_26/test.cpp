#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//
//namespace lj
//{
//	int i = 0;
//
//}

namespace lj
{
	int rand = 0;
	typedef struct Stack
	{
		int a = 0;
		int i;
	}ST;
	int Add(int a, int b)
	{
		return a + b;
	}
}
//int rand = 0;
//using lj::Stack;
//using namespace std;
using std::cout;
using std::endl;
using std::cin;
int main()
{
	printf("%d\n",lj::rand);
	lj::ST a;
	printf("%d\n",lj::Add(lj::rand, 1));
	cout << "Hellow \n";
	std::cout << "Hi" <<std:: endl;
	std::cout << std::endl;

	int b;
	char c ;
	//std::cin >> b;
	cin >> b;
	cin >> c;
	cout << b << endl << c << endl;
	return 0;
}
