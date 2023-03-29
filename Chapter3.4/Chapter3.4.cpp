#include <iostream>
using namespace std;

int getPrice(bool onSale)
{
	if (onSale) 
		return 10;
	else 
		return 100;
}

int main()
{
	int x = 5;
	cout << ((x % 2 == 0) ? "even" : "odd") << endl;


	////conditional operator(조건연산자,삼항연산자)
	//bool onSale = true;
	//
	////const int price = (onSale == true) ? 10 : 100;
	//const int price = getPrice(onSale);

	///*int price;
	//if (onSale)
	//	price = 10;
	//else
	//	price = 100;*/

	//cout << price << endl;


	////comma operator
	//
	//int a = 1, b = 10;
	//int z;

	//z = a, b; // => (z = a),b; 우선순위에 의해서 이렇게 적용됨

	//cout << z << endl;

	
	//int x = 3;
	//int y = 10;
	////int z = (++x, ++y);
	//++x;
	//++y;
	//int z = y;

	//cout << x << " " << y << " " << z << endl;

	////sizeof
	//sizeof
	//float a;

	//sizeof(float); //float = 4byte,  1byte = 8bit, "4byte = 32bit"
	//sizeof(a); 

	//cout << sizeof(float); // 데이터 타입은 괄호 있어야함.
	//cout << sizeof a; //변수명일때는 (a)가 아니라도 작동


	return 0;
}