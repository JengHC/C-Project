#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
	using namespace std;

	/*연습문제 
	double f = 3.141592;
	cout << 3141592e-6 << endl;
	// setprecision은은 <iomanip> 헤더 파일에 정의되고,
	입력한 숫자의 자릿수만큼 반올림하여 출력해준다.
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