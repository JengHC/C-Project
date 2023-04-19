#include<iostream>
#include "MyConstants.h"
using namespace std;
/*
	전역 변수는 범위가 무제한이 될수도 있다.(대부분 어디서든 사용할수 있는 변수를 의미)
	전역 변수는 가급적 사용 X
	객체지향을 사용해서 전역변수를 안쓰는게 제일 좋은 방법이다.
	지역 변수는 linkage 없다(다른 파일에 있는것과 연결될 일이 없다.
*/

/*
	int g_x                // external linkage(외부 연결)
	static int g_x;        // internal linkage(내부 연결)
	const int g_x;         // x

	extern int g_z;
	extern const int g_z;

	int g_y(1); 
	static int g_y(1);
	const int g_y(1);

	extern int g_w(1);
	extern const int g_w(1);


*/


// 전방선언(forward declaration)
void doSomething(); // 다른 파일에서의 함수를 실행하려고 할때 사용, extern생략 가능
//extern int a = 456;  // 두개의 파일에서 같은 이름으로 정의가 되있고, extern이기 때문에 int a가 두개가 된것이다. 그래서 여러번 정의된 기호 오류가 뜸.
//extern int a;          // 그래서 위에 int a = 456; 은 사용하면 안됨. 

// static int g_a = 1; // int앞에 static을 사용하면 다른 cpp파일에서 사용이 안되도록 함.
//void doSomething()
//{
//	//int a = 1;
//	static int a = 1; // 메모리가 static이다
//	++g_a;
//	cout << g_a << endl;
//}

//int value = 123;
int main()
{
	cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;

	doSomething();

	//cout << a << endl;

	//cout << value << endl;

	//int value = 1;

	//cout << ::value << endl;
	//cout << value << endl;

	return 0;
}