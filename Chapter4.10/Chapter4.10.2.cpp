#include<iostream>
using namespace std;


// 출력값을 보면 16이 나온다.
// id,age,wage를 다 계산하면 이론상 14이지만,
// 컴퓨터의 데이터 구조상 2bytes를 잘 인식 하지 못하기 때문에 
// id,공백,age,wage 구조로 받아들여 padding되어서 2 + (2) + 4 + 8 = 16 이라는 결과가 나온다
//  https://en.wikipedia.org/wiki/Data_structure_alignment
struct Employee   // 2 + 4 + 8 =14
{
	short  id;    // 2 bytes  
	int    age;   // 4 bytes
	double wage;  // 8 bytes
};

int main()
{
	Employee emp1;

	cout << sizeof(Employee) << endl; 

	return 0;
}