#include <iostream>
#include "MY_CONSTANTS.h"
using namespace std;

//void printNumber(const int my_number)
//{
//	//my_number = 456; 이렇게는 안씀.
//
//	int n = my_number;
//
//	cout << my_number << endl;
//}

int main()
{
	double radius;
	cin >> radius;

	double circumference = 2.0 * radius * constants::pi;
	cout << circumference << endl;
	/*const int price_per_item = 30;

	int num_item = 123;

	int price = num_item * price_per_item;*/

	//const 변수에 값이 지정되어서 바꿀수 없음
	//constexpr 컴파일 타임에 확실히 결정되어야 하는 상수

	//constexpr int my_const(123);

	//int number;
	//cin >> number;

	// number는 런타임에 결정되기 때문에 constexpr사용 불가
	//const int special_number(number);


	return 0;
}