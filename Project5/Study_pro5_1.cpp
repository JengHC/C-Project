#include<iostream>

using namespace std;

/*void print()
{
	cout << "Hello" << endl;
}*/

/*void printHelloWorld()
{
	cout << "Hello World" << endl;

	return;
}*/

int addTwoNumbers(int a, int b) //함수내부에서 함수 정의 안됨. 최근부터는 네스티드 클래스 선언 가능
{
	int sum = a + b;

	return sum;

}
int main()
{
	//int sum = addTwoNumbers(1, 2);
	cout << addTwoNumbers(1, 2);

	return 0;
}