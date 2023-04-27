#include<iostream>
#include<typeinfo>
#include<string>
// 이런걸 하나씩 기억 하기 힘들다 그래서 열거형 사용
//int computeDamange(int weapon_id)
//{
//	if (weapon_id == 0) //sword
//	{
//		return 1;
//	}
//
//	if (weapon_id == 1) //hammer
//	{
//		return 2;
//	}
//}

enum Color
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN, // 열거할때 같은 값을 지정해서 사용x, 두개가 같다고 지정됨
	COLOR_SKYBLUE,
	BLUE
};

enum Feeling
{
	HAPPY,
	JOY,
	TIRED,
	
};

int main()
{
	using namespace std;

	//Color paint = COLOR_BLACK;
	//Color house(COLOR_BLUE);
	//Color apple{ COLOR_RED };
	
	/*Color my_color = COLOR_RED;
	cout << my_color << " " << COLOR_RED << endl;*/

	//if (COLOR_BLUE == BLUE)
	//{
	//	cout << "Equal" << endl;

	//}

	int color_id = COLOR_RED;

	Color my_color = static_cast<Color>(3);

	/*cout << color_id << endl;*/

	//int in_number;
	//cin >> in_number;
	string str_input;

	std::getline(cin, str_input);

	if (str_input == "COLOR_BLACK") 
		my_color = static_cast<Color>(0);
	// ...

	return 0;
}