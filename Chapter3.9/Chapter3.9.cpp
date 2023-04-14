#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	/*
	//예를 들어 게임에서 아이템을 얻는 경우를 생각해보자.
	bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;

	// event!
	item1_flag = true;

	// die! item2 los
	item2_flag = false;

	if (item3_flag == true)
	{
		//event
	}

	if (item3_flag == true && item4_flag == false)
	{
		item3_flag = false;
		item4_flag = true;
	}*/
	
	/*
	const unsigned char opt0 = 1 << 0; // 1의 비트 열을 0칸씩 왼쪽으로 이동 
	const unsigned char opt1 = 1 << 1; // 1의 비트 열을 1칸씩 왼쪽으로 이동 
	const unsigned char opt2 = 1 << 2; // 1의 비트 열을 2칸씩 왼쪽으로 이동 
	const unsigned char opt3 = 1 << 3; // 1의 비트 열을 3칸씩 왼쪽으로 이동 

	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;

	unsigned char items_flag = 0;
	cout << "No item "<< bitset<8>(items_flag) << endl;

	// item0 on
	items_flag |= opt0;
	cout << "Item0 obtained " << bitset<8>(items_flag) << endl;

	// items3 on
	items_flag |= opt3;
	cout << "Item3 obtained " << bitset<8>(items_flag) << endl;

	// item3 lost
	items_flag &= ~opt3;
	cout << "Item3 lost " << bitset<8>(items_flag) << endl;

	// has item1 ?
	if (items_flag & opt1)
	{
		cout << "Has item1" << endl;
	}
	else
	{
		cout << "Not have item1" << endl;
	}

	// has item0 ?
	if (items_flag & opt0)
	{
		cout << "Has item0" << endl;
	}

	// obtain item 2,3
	items_flag |= (opt2 | opt3);

	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item2, 3 obtained " << bitset<8>(items_flag) << endl;

	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= opt2 | opt1;
	}
	cout << bitset<8>(items_flag) << endl;
	*/

	/*
	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	cout << std::bitset<32>(red_mask) << endl;
	cout << std::bitset<32>(green_mask) << endl;
	cout << std::bitset<32>(blue_mask) << endl;

	unsigned int pixel_color = 0xDAA520;

	cout << std::bitset<32>(pixel_color) << endl;
	
	unsigned char blue = pixel_color & blue_mask;
	unsigned char green = (pixel_color & green_mask)>>8;
	unsigned char red = (pixel_color & red_mask)>>16;

	cout << "blue " << std::bitset<8>(blue) << " " << int(blue) << endl;
	cout << "green " << std::bitset<8>(green) << " " << int(green) << endl;
	cout << "red " << std::bitset<8>(red) << " " << int(red) << endl;
	*/

	/*
	unsigned char option_viewed = 0x01;
	unsigned char option_edited = 0x02;
	unsigned char option_liked = 0x04;
	unsigned char option_shared = 0x08;
	unsigned char option_deleted = 0x80;

	unsigned char my_article_flags = 0;

	// 기사를 봤을때
	if (my_article_flags | option_viewed)
	{
		my_article_flags |= option_viewed;
	}

	// 기사의 좋아요를 클릭했을때, 다시 클릭했을때
	if (my_article_flags & option_liked)
	{
		my_article_flags ^= option_liked;
	}
	else
	{
		my_article_flags |= option_liked;
	}

	// 본 기사 삭제
	if (my_article_flags & option_viewed)
	{
		my_article_flags |= option_deleted;
	}
	*/

	return 0;
}