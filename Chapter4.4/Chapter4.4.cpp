#include<iostream>

// Parameter(매개변수)에서는 auto를 사용할수 없다
// 그대신 Template를 사용
auto add(int x, int y)
{
	return x + y;
}

int main()
{
	using namespace std;

	auto a = 123;
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);

	return 0;
}