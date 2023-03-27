#include <iostream>
using namespace std;

int add(int a, int b)
{
	return a + b;
}


int main()
{
	int x = 1, y=2;
	int v = add(x, ++y); // x와y가 서로 영향을 주지 않으니까 상관은 없는데 아래와 같은 경우는 사용x

	//int x = 1;
	//int v = add(x, ++x); // 이런 코딩을 사용하면 안된다.

	cout << v << endl;

	//int x = 6, y = 6;

	//// ++
	//cout << x << " " << y << endl;
	//cout << ++x << " " << --y << endl; //++,-- 먼저 반영 해서 출력
	//cout << x << " " << y << endl;	   // 위에 값을 출력
	//// x의 값을 일단  stream으로 보낸 뒤, 값을 더한다. 
	//// 화면에 출력되는 값은 1이 더해지기 전의 값이다.
	//// y도 똑같은 원리
	//cout << x++ << " " << y-- << endl; 
	//cout << x << " " << y << endl; // 앞에서 1이 더해진 값을 보냈기 때문에 더해진 값이 출력

	return 0;
}