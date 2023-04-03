#include <iostream>
#include<bitset>
using namespace std;

int main()
{

	//unsigned int a = 1024;

	//unsigned int a = 0b1100;
	//unsigned int b = 0b0110;

	//cout << std::bitset<4>(a & b)<< endl;  // bitwise AND
	//cout << std::bitset<4>(a | b) << endl; // bitwise OR
	//cout << std::bitset<4>(a ^ b) << endl; // bitwise XOR

	// a &= b; // and /or / xor 줄여서 사용가능

	//Quiz
	// 0110 >> 2 -> decimal
	// 5 | 12 => 
	// 5 &12 => 
	// 5 ^ 12 => 

	/*unsigned int a = 0b0101;
	unsigned int b = 0b1100;

	cout << std::bitset<4>(a | b) << endl;
	cout << std::bitset<4>(a & b) << endl; 
	cout << std::bitset<4>(a ^ b) << endl; */


	//cout << std::bitset<16>(a) << endl;

	//// bitwise not : ~a
	//// logical not : !a
	//cout << std::bitset<16>(~a) << " " << (~a) << endl; 


	//cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
	//cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
	//cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;
	//cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl;



	//unsigned int b = a << 2;

	//cout << std::bitset<4>(b) << " " << b <<endl;

	return 0;
}