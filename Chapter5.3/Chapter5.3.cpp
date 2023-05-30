#include<iostream>
using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	//switch (static_cast<int>(color))
	//{
	//case 0:
	//	cout << "Black" << endl;
	//	break;
	//case 1:
	//	cout << "White" << endl;
	//	break;
	//}

	//if (color == Colors::BLACK)
	//{
	//	cout << "Black" << endl;
	//}
	//else if (color == Colors::WHITE)
	//{
	//	cout << "White" << endl;
	//}
	//else if (color == Colors::RED)
	//{
	//	cout << "Red" << endl;
	//}
}
int main()
{
	int x;
	cin >> x;

	switch (x)
	{
		case 0:
		{
			int y = 5;
			y = y + x;
			cout << y << endl;
			break;
		}
		case 1:
		{
			int y = 5;
			y = y - x;
			cout << y << endl;
			break;
		}
		default:
			cout << "Undefined input " << x << endl;
			break;
	}

	//printColorName(Colors::BLACK);

	//int x;
	//cin >> x;

	//{
	//	switch (x)
	//	{
	//	case 0:
	//		cout << "Zero";
	//		//break;
	//	case 1:
	//		cout << "One";
	//		//break;
	//	case 2:
	//		cout << "Two";
	//		//break;
	//	}

	//	cout << endl;
	//}
	return 0;
}