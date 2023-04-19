#include<iostream>
#include"MyConstants.h"
using namespace std;

extern int a = 123; //Link에러가 떴을때, 변수 초기화를 안해줘서 메모리가 할당이 안됐음.

void doSomething()
{
	cout << "Chapter4.2.2 cpp " << Constants::pi << " " << &Constants::pi << endl;

}