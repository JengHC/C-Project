#include<iostream>
using namespace std;


// ��°��� ���� 16�� ���´�.
// id,age,wage�� �� ����ϸ� �̷л� 14������,
// ��ǻ���� ������ ������ 2bytes�� �� �ν� ���� ���ϱ� ������ 
// id,����,age,wage ������ �޾Ƶ鿩 padding�Ǿ 2 + (2) + 4 + 8 = 16 �̶�� ����� ���´�
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