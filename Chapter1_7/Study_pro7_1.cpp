#include<iostream>
using namespace std;

int main()
{
	int x = 0;
	cout << x << " " << &x << endl; 
	// &x <�� x�� �ּҸ� �˰� ������ &���
	//int x = 1; �ĺ��� 2���� ���x 
	//�߰�ȣ �ȿ� �߰�ȣ,�� �ȿ� ���� �ĺ��ڰ� ���� �ȴ�. 
	//��? Why? ������ �ٸ��� ������ 

	{
		int x = 0;
		//x = 1;
		cout << x << " " << &x << endl;
	}
	cout << x << " " << &x << endl;

	return 0;
}