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

int addTwoNumbers(int a, int b) //�Լ����ο��� �Լ� ���� �ȵ�. �ֱٺ��ʹ� �׽�Ƽ�� Ŭ���� ���� ����
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