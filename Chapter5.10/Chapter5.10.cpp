#include<iostream>
using namespace std;

int getInt()
{
	while (true)
	{
		cout << "Enter an integer number : ";
		int x;
		cin >> x;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Invaild operaotr, please try again" << endl;
		}
		else
		{
			cin.ignore(32767, '\n');
			return x;
		}
	}
	//cin.ignore(32767, '\n'); // 버퍼를 비울때

	//return x;
}

char getOperator()
{
	while (true)
	{
		cout << "Enter an operator (+,-,*,/) : ";
		char op;
		cin >> op;
		cin.ignore(32767, '\n');

		if (op == '+' || op == '-' || op == '*' || op == '/') //*(곱), /(나누기) 하려면 여기 추가 
		{
			return op;
		}
		else
		{
			cout << "Invaild operaotr, please try again" << endl;
		}
	}
}

void printResult(int x, char op, int y)
{
	if (op == '+') // 이부분도 *(mul), /(div) 추가
	{
		cout << x + y << endl;
	}
	else if (op == '-')
	{
		cout << x - y << endl;
	}
	else if (op == '*')
	{
		cout << x * y << endl;
	}
	else if (op == '/')
	{
		cout << x / y << endl;
	}
	else
	{
		cout << "Invalid operator" << endl;
	}
}

int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);

	return 0;
}