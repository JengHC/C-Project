#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//연산자 우선순위, 결합법칙
	//괄호를 사용해서 원하는 우선순위를 정해라
	// ^ (Bitwise XOR) 제곱이 아니다.

	// 제곱 사용시 cmath헤더파일 사용
	// pow(x,y) 하면 됨
	int x = std::pow(2, 3);
	cout << x << endl;

	return 0;
}
//[참고] : https://ko.wikipedia.org/wiki/C%EC%99%80_C%2B%2B%EC%9D%98_%EC%97%B0%EC%82%B0%EC%9E%90