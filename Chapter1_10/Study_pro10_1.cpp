#include <iostream>
using namespace std;

int add(int a, int b); // forward declaration 전방 선언
int multiply(int a, int b);
int subtract(int a, int b);

int main()
{
	cout << add(1, 2) << endl;
	cout << multiply(1, 2) << endl;
	cout << subtract(1, 2) << endl;
}

//Definiton 정의
int add(int a, int b)
{
	return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}


