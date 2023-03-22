#include <iostream>
using namespace std;

bool isEqual(int a, int b)
{
	bool result = (a == b); // a와 b가 같으면 True , 아니면 False
	
	return result;
}

int main()
{

	//bool b1 = true; // copy initialization
	//bool b2(false); // direct '''
	//bool b3{ true }; //uniform ini'''
	//b3 = false;

	//cout << boolalpha; // 0,1로 출력되던걸 true, flase로 출력
	//cout << isEqual(1, 1) << endl;
	//cout << isEqual(0, 3) << endl;

	/*cout << b3 << endl;
	cout << b1 << endl;*/

	//cout << !true << endl; // ! => not 이라는 뜻 !을 잘 쓰지는 않음
	//cout << !false << endl;

	//cout << (true && true) << endl; // &&연산자는 모두 True면 True, 하나라도 True가 아니면 False
	//cout << (true && false) << endl;
	//cout << (false && true) << endl;
	//cout << (false && false) << endl;

	//cout << (true || true) << endl; // || (or)연산자는 하나만 True여도 True 
	//cout << (true || false) << endl;
	//cout << (false || true) << endl;
	//cout << (false || false) << endl;

	/*if (false)
		cout << "this is true" << endl;
	else
		cout << "this is false" << endl;*/

	//if (true)
	//{ 
	//	cout << "this is true" << endl;
	//	cout << "True second line" << endl;
	//}
	//else
	//{
	//	cout << "this is false" << endl;
	//}

	// if문에 조건제시 할때 True를 1로 해도 무관
	//if (1) 
	//	cout << "True" << endl;
	//else
	//	cout << "False" << endl;

	bool b;
	cin >> b;
	// boolean값을 입력할때 true false로 입력을 하면 안된다. 이럴경우 오류 발생
	// boolean값을 입력할때는 0,1로 입력 必 

	cout << boolalpha;
	cout << "Your input: " << b << endl;

	return 0;
}