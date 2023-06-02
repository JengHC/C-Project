#include<iostream>
using namespace std;

int pow(int base, int exponent)
{
	int result = 1;
	for (int count = 0; count < exponent; ++count)
	{
		result *= base;
	}
	return result;
}


int main()
{
	for (unsigned int i = 9; i >= 0; --i)
	{
		cout << i << endl;
	}

	/* a단 만 나오는 구구단
	int a;
	cout << "Number: ";
	cin >> a;

	for (int i = 1; i <= 9; i++)
	{
		cout << a << "*" << i << "=" << a * i << endl;
	}*/


	/* a단 까지 나오는 구구단
	int a;
	cout << "enter a number : ";
	cin >> a;

	for (int j = 1; j <= 9; j++ )
	{
		for (int i = 1; i <= a; i++)
		{
			cout << i << "*" << j << "=" << i * j<<'\t';
		}cout << "\n";
	
	}*/


	//반복문을 사용한 별 찍기 2
	//int a;
	//cin >> a;

	//for (int i = 1; i <= a; i++)
	//{
	//	for (int j = 0; j < a - i; j++)
	//	{
	//		cout << " "; 
	//	}
	//	for (int j = 0; j < i; j++)
	//	{
	//		cout << "*";
	//	}
	//cout << "\n";
	//}


	// 반복문을 사용한 별 찍기1
	//int a;
	//cin >> a;

	//for (int i = 1; i <= a; ++i)
	//{
	//	for (int j = 1; j <= i; ++j)
	//	{
	//		cout << "*";
	//	}
	//	cout << "\n";
	//}

	//int i = 0, j = 0;
	//for (; (i+j) < 10; ++i, j+=2)
	//{
	//	cout << i << " " << j << endl;
	//}

	//for (int i = 0, j = 0; i < 10; ++i, --j)
	//{
	//	cout << i << " " << j << endl;
	//}

	//for (int count = 9; count >= 0; count -=2)
	//{
	//	cout << count << endl;
	//}

	/*cout << pow(2, 4) << endl;*/

	//int count = 0;

	//for (int count = 0; count < 10; count++) // iteration
	//{
	//	cout << count << endl;
	//}

	//cout << count << endl;

	return 0;
}