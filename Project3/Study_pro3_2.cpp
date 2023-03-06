#include <iostream> // cout, cin, endl, ...
#include <cstdio>   // printf 

int main()
{
	using namespace std;

	int x =1 ;

	cout << "Before your input, x was 1" << endl;

	cin >> x ; //>>기호는 input operator 입력 연산자

	cout << "Your input is " << x << endl;

	return 0;
}