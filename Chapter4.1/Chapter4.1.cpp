#include<iostream>
using namespace std;

namespace work1::work11::work111 // 이렇게 work1안에 work11 넣고 하게끔,사용가능
{
	int a = 1;
	void doSomething()  // 밑에 dosomething이랑 이름이 같지만, 파라미터가 다르면 다른 함수임
	{
		a += 3;
	}
}

namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
	}
}
int main()
{
	work1::work11::work111::doSomething(); // :: 범위결정연산자, 충돌이 나면 해결해준다 이런 의미 

	work2::a;
	work2::doSomething();


	/*int apple = 5;

	cout << apple << endl;

	if (true)
	{
		int apple = 1;
		cout << apple << endl;
	}
	cout << apple << endl;*/

	return 0;
}