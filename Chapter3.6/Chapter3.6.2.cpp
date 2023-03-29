#include<iostream>
using namespace std;

int main()
{
	cout << (true && true) || false << '\n';
	cout << (false && true) || true << '\n';
	cout << (false && true) || false || true <<'\n';
	cout << (14 > 13 || 2 > 1) && (9 > 1) << '\n';
	cout << !(2314123 > 2 || 123123 > 2387) << '\n';

	return 0;

}