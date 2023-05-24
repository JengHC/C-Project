#include<iostream>
using namespace std;

//int main(int x, int y)
//{
//	if (x > y) 
//	{ 
//		return y; 
//	}
//	else
//	{
//		return x; 
//	}
//
//	/*return (x > y) ? y : x;*/
//}

int main()
{
	int x;
	cin >> x;

	if (x = 0) // 등호(=) 한개면 x의 값이 0이 되어서 들어가버림
	{
		cout << x << endl;
	}
	cout << x << endl;


	//if (x > 10)
	//	;       // null statement 
	//{
	//	x = 1;
	//}


	//if (x > 10)
	//{
	//	cout << "A" << endl;
	//}
	//else if (x == -1)
	//{
	//	return 0; // return 대신 exit(0) 사용 가능
	//}
	//else if (x < 0)
	//{
	//	cout << "B" << endl;
	//}
	//cout << "Hello" << endl;

	//if (x >0 && y>0)
	//{
	//	cout << "both numbers are positive" << endl;
	//}
	//else if( x>0 || y>0)
	//{
	//	cout << "one of the numbers is positive" << endl;
	//}
	//else
	//{
	//	cout << "Neither number is positive" << endl;
	//}


	//if (x >= 10)
	//{
	//	if (x >= 20)
	//	{
	//		cout << " x is between 10 and 20" << endl;
	//	}
	//}
	//else
	//{
	//	cout<< "..." << endl;
	//}


	//if (x > 10)
	//{
	//	cout << "x is greater than 10" << endl;
	//}
	//else if (x < 10)
	//{
	//	cout << "x is less than 10" << endl;
	//}
	//else // if(x == 10)
	//	cout << "x is exactly 10" << endl;

	//if (x > 10)
	//{
	//	cout << x << " is greater than 10" << endl;
	//}
	//else
	//{
	//	cout << x << " not is greater than 10" << endl;
	//}

	return 0;
}