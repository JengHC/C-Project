#include<iostream>

using namespace std;

int main()
{
	int x = 7;
	int y = 4;

	int z = x;
	z += y; // z = z + y; 와 같다. +=,-=,*=,/=,%= 다 사용가능.

	//cout << -5 / 2 << endl; // 정수형이면 나머지 절삭 되서 계산됨.
	//cout << -5 % 2 << endl; // 나머지 연산자일경우, 왼쪽 숫자 부호에 따라 결정된다.

	//cout << x / y << endl;
	//cout << float(x)/y << endl; //둘 중 하나 실수라면 값이 실수로 줄력됨.
	//cout << x / float(y) << endl;
	//cout << float(x) / float(y) << endl;

	return 0;
}