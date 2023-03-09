#include <iostream> // cout, cin, endl, ...
#include <cstdio>   // printf 

int main()
{
	using namespace std; // 컴파일러가 namespace std안에서 알아서 컴파일 해줌 
	int x = 1024;
	double pi = 3.141592;

	cout << "I love Game\n"; //<< endl ; 
	// std라는 namespace안에 cout 출력하고 싶은 내용이 <<을 타고 cout 으로 들어간다 라는 의미
	// << 기호는 output operator라고 불림
	// endl= end of line
	cout << "x is " << x << " pi is " << pi<< endl;

	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl;

	cout << "\a"; //\a는 audio 약자 

	return 0;
}
