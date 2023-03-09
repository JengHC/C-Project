#include<iostream>
using namespace std;

int main()
{
	int x = 0;
	cout << x << " " << &x << endl; 
	// &x <는 x의 주소를 알고 싶을때 &사용
	//int x = 1; 식별자 2개는 사용x 
	//중괄호 안에 중괄호,그 안에 같은 식별자가 들어가도 된다. 
	//왜? Why? 공간이 다르기 때문에 

	{
		int x = 0;
		//x = 1;
		cout << x << " " << &x << endl;
	}
	cout << x << " " << &x << endl;

	return 0;
}