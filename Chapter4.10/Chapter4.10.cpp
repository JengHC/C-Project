#include<iostream>
using namespace std;

struct Person
{
	double height = 3.0;
	float  weight = 200.0;
	int    age = 100;
	string name = "Mr. Incredible";

	//void print()
	//{
	//	cout << height << " " << weight << " " << age << " " << name;
	//	cout << endl;
	//}
};

//Person getMe()
//{
//	Person me{ 2.0,100.0,20,"Jeong" };
//	return me;
//	
//}

//struct Family //구조체 안에 구조체를 넣을 수 있다.
//{
//	Person me, mom, dad;
//};

int main()
{
	Person me{ 2.0,100.0,20,"Jeong" };
	//Person me;
	cout << me.name << endl;

	/*Person me_from_func = getMe();
	me_from_func.print();*/

	//Person me{2.0,100.0,20,"Jeong"};
	//printPerson(me);
	//me.print();

	//Person me2(me);
	//me2 = me;
	//me2.print();


	//me.age = 26;
	//me.name = "Jeong";
	//me.height = 1.78;

	return 0;
}