#include<iostream>
using namespace std;

int main()
{
	int h,m,s;
	cin >> s;

	//switch (s)
	//{

	m = s / 60;
	s = s % 60;  // %는 나눈 후, 나머지 반환함.

	h = m / 60; // 1시간일경우 3600초니까, 3600/60 => m,  m/60=> h 
	m = m % 60; // m/60 후, 나머지 반환

	if (h<1)
		cout << m << "분" << s << "초" << endl;
	
	else
		cout << h << "시" << m << "분" << s << "초" << endl;
}