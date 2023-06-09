#include<iostream>
#include<cstdlib> // rand(), srand()
#include<ctime>   // time()
#include<random>  // C++ 17 이후로 계속 사용되는 Library 
using namespace std;

//int getRandomNumber(int min, int max)
//{
//	static const double fraction = 1.0 / (RAND_MAX + 1.0);
//
//	return min + static_cast<int>((max - min + 1) * (rand() * fraction));
//}

int main()
{
	random_device rd;
	mt19937_64 mersenne(rd()); // create a mesenne twister, random생성하는 알고리즘과 관련된것
	uniform_int_distribution<>dice(1, 6);

	for (int count = 1; count <= 20; ++count)
	{
		cout << dice(mersenne) << endl;
	}

	//srand(5323); 
	//s의 뜻은 seed, seed가 고정되어있으면 랜덤 값이 똑같음, 
	//디버깅이 필요할때는 seed를 고정해놓으면 오류가 발생했다, 안했다 이런 일이 없어짐
	//이유는 같은 숫자를 발생시키기 때문에
	//srand(static_cast<unsigned int>(time(0)));

	//for (int count = 1; count <= 100; ++count)
	//{
	//	cout << rand() << "\t";

	//	if (count % 5 == 0)
	//	{
	//		cout << endl;
	//	}
	//}
	return 0;
}