#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
	using namespace std;

	/*�������� 
	double f = 3.141592;
	cout << 3141592e-6 << endl;
	// setprecision���� <iomanip> ��� ���Ͽ� ���ǵǰ�,
	�Է��� ������ �ڸ�����ŭ �ݿø��Ͽ� ������ش�.
	cout << setprecision(6) << endl;
	cout << f << endl; */

	double d1(100 - 99.999);
	double d2(0.1);

	cout << d1 << endl;
	cout << d2 << endl;

	cout << setprecision(10) << endl;
	cout << d1 << endl;

	cout << setprecision(10) << endl;
	cout << d2 << endl;


	return 0;
}