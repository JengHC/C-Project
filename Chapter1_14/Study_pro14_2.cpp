#include<iostream>


void doSomething()
{
using namespace std;

#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#else
	cout << "Orange" << endl;
#endif

//#ifdef LIKE_APPLE
//	cout << "Orange" << endl;
//#endif 
}