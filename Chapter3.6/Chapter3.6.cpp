#include<iostream>
using namespace std;

int main()
{
	bool x = true;
	bool y = false;

	// XOR 
	// false false => false
	// false true => true
	// true false =>true
	// true true =>false
	// C++에는XOR없으므로 아래와 같이 쓴다. 이때 bool값이다.
	//if (x != y) 
	//{
	//	//do someting;
	//}

	//드모르간 법칙(De Morgans's Law)
	/*!(x && y);
	!x && !y;*/

	////short circuit evaluation
	//int x = 1;
	//int y = 2;

	////++x : 바로, 즉시 x를 1 증가시킴
	////x++ : 세미콜론; 을 만난 후에 x를 1 증가시킴

	////&&연산자는 왼쪽 부터 시작해서 true가 나오면 바로 끝
	//if (x == 1 && y++ == 2) 
	//{
	//	//do something
	//}
	//cout << y << endl;

	//int v = 1;

	//if (v == 0 || v == 1)
	//	cout << "v is 0 or 1" << endl;

	//logical AND
	//bool x = true;
	//bool y = false;

	//cout << (x && y) << endl;

	//logical OR ||
	//bool x = true;
	//bool y = false;

	//cout << (x || y) << endl;

	/*bool hit = true;
	int health = 10;

	if (hit == true && health < 20)
	{
		cout << "die" << endl;
	}
	else
		health -= 20;*/

	return 0;
}