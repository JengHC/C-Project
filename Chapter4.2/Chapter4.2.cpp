#include<iostream>
using namespace std;
/*
전역 변수는 범위가 무제한이 될수도 있다.(대부분 어디서든 사용할수 있는 변수를 의미)
전역 변수는 가급적 사용 X

*/
int a = 1;


void doSomething()
{
	//int a = 1;
	//static int a = 1; // 메모리가 static이다
	++a;
	cout << a << endl;
}

//int value = 123;
int main()
{
	doSomething();
	doSomething();
	doSomething();
	doSomething();

	//cout << value << endl;

	//int value = 1;

	//cout << ::value << endl;
	//cout << value << endl;

	return 0;
}