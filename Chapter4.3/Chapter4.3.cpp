#include<iostream>

namespace a
{
	int my_var(10);
	int my_a(123);
	int count(123123);
}
namespace b
{
	int my_var(20);
	int my_b(456);
}
int main()
{
	using namespace std;

	//using namespace a;
	//using namespace b;

	// cout << my_var << endl; //동일 namespace안에 같은 이름의 변수가 지정될 경우 이렇게 못씀.
	// 그래서 아래와 같은 두개의 방법으로 사용
	// # 1
		// 위에 사용된 using namespace a와 b에 my_var출력을 묶어서 사용
		// std안에 count가 있어서 중복 사용x
		// 그런데 std를 꺼버리면 오류가 뜬다. 
		// 이때는 using nameapce a를 지우고, a::count 이렇게 사용함.
		// using namespace std는 선언하면 선언을 취소하는 방법x
	{
		//using namespace a;
		cout << a::my_var << endl;
		cout << a::count << endl;
	}

	{
		using namespace b;
		cout << my_var << endl;
	}

	// # 2
	cout << a::my_var << endl;
	cout << b::my_var << endl;


	/*cout << my_a << endl;
	cout << my_b << endl;*/

	return 0;
}