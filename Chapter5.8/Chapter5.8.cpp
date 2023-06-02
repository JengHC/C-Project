#include<iostream>
using namespace std;

//void breakOrReturn()
//{
//	while (true)
//	{
//		char ch;
//		cin >> ch;
//
//		if (ch == 'b')
//		{
//			break;
//		}
//		if (ch == 'r')
//		{
//			return;
//		}
//	}
//	cout << "Hello" << endl;
//}

int main()
{
	int count(0);
	while (true)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << count++ << endl;

		if (ch == 'x')
		{
			break;
		}
	}

	/*int count(0);
	bool escape_flag = false;
	while (!escape_flag)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << count++ << endl;

		if (ch == 'x')
		{
			escape_flag = true;
		}
	}*/

	//int count(0);

	//do
	//{
	//	if (count == 5)
	//	{
	//		continue;
	//	}
	//	cout << count << endl;
	//} while (++count < 10);
	////while(count<10); //이렇게 사용하면 count가 5일떄 continue이기때문에 그냥 무한루프에 빠지게 된다.

	//for (int i = 0; i < 10; i++)
	//{
	//	/*if (i % 2 == 0)
	//	{
	//		continue;
	//		
	//	}cout << i << endl;*/


	//	//if (i % 2 == 1)
	//	//{
	//	//	cout << i << endl;

	//	//}
	//}

	/*for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
		if (i == 5)
		{
			break;
		}
	}*/

	//breakOrReturn();

	/*int count = 0;
	while (true)
	{
		cout << count << endl;
		if (count == 10)
		{ 
			break;
		}
		count++;
	}*/
	return 0;
}