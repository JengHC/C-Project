#include<iostream>
#include"MyConstants.h"
using namespace std;

extern int a = 123; //Link������ ������, ���� �ʱ�ȭ�� �����༭ �޸𸮰� �Ҵ��� �ȵ���.

void doSomething()
{
	cout << "Chapter4.2.2 cpp " << Constants::pi << " " << &Constants::pi << endl;

}