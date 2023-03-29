#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double d1(100 - 99.99); // 0.001
	double d2(10 - 9.99);   // 0.001

	//cout << d1 << endl;
	//cout << d2 << endl;

	//cout << "정밀도 20으로 출력" << endl;
	//cout << std::setprecision(20);
	//cout << d1 << endl;
	//cout << d2 << endl;

	const double epsilon = 1e-16;

	if (std::abs(d1 - d2) < epsilon)
		cout << "Apporximately equal" << endl;
	else
		cout << "Not equal" << endl;

	//cout << std::abs(d1-d2) << endl;


	//if (d1 == d2)
	//	cout << "equal" << endl;
	//else
	//{
	//	cout << "Not equal" << endl;

	//	if (d1 > d2)cout << "d1>d2" << endl;
	//	else//if(d1 < d2) because d1 != d2
	//		cout << "d1<d2" << endl;
	//}

	//while (true)
	//{
	//	int x, y;
	//	cin >> x >> y;
	//	cout << "Your input values are : " << x << " " << y << endl;

	//	if (x == y)
	//		cout << "equal" << endl;
	//	if (x != y)
	//		cout << "Not equal" << endl;
	//	if (x > y)
	//		cout << "x is greater than y" << endl;
	//	if (x < y)
	//		cout << "x is less than y" << endl;
	//	if (x >= y)
	//		cout << "x is greater than y or equal to y" << endl;
	//	if (x <= y)
	//		cout << "x is less than or equal to y" << endl;
	//}
	return 0;
}