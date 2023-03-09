#include<iostream> //input ouput 입출력 가능하게

int main(void)//main 은 함수, 함수는 ()들어감, 빈칸이나 빈줄은 컴파일러가 무시
{
	//int x;
	//x = 5; 
	//std::cout << x << std::endl; //endl = end line  <<표시는 output operator 연산자라고 함

	int x = 1;
	x = x + 2;
	std::cout << x << std::endl;

	int y = x;
	std::cout << y << std::endl;

	std::cout << x + y << std::endl;

	std::cout << x << std::endl;

	/*int z;
	std::cout << z << std::endl;*/


	return 0;
}