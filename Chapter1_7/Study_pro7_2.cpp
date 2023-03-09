#include<iostream>
using namespace std;

void doSomething(int x)
{
	x = 123;
	cout << x << endl; // #2

}

int main()
{
	int x = 0;
	cout << x << endl; // #1
	doSomething(x);
	cout << x << endl; //#3

	return 0;
}

//int doSomething(int x)
//{
//	x = 123;
//	cout << x << endl; // #2
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	cout << x << endl; // #1
//	doSomething(x);
//	cout << x << endl; //#3
//
//	return 0;
//}