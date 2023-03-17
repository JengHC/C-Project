#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
	/*float f(123456789.0f);*/
	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	/*cout << posinf<< " " << std::isinf(posinf) << endl;
	cout << neginf<< " " << std::isinf(neginf) << endl;
	cout << nan <<" " << std :: isnan(nan)<<endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;*/

	//double d2(0.1+0.1+ 0.1 + 0.1+ 0.1 + 0.1+ 0.1 + 0.1+ 0.1 + 0.1);
	//long double ld(3.141592);
	
	/*cout << setprecision(17);

	cout << d << endl;
	cout << d2 << endl;*/

	/*cout << std::setprecision(17) << endl;
	cout << d << endl;*/

	/*cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl;*/

	/*cout << numeric_limits<float> ::lowest() << endl;
	cout << numeric_limits<double> ::lowest() << endl;
	cout << numeric_limits<long double> ::lowest() << endl;*/
	
	return 0;
}