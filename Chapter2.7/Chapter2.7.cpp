#include<iostream>
#include<limits>
using namespace std;

int main()
{
	char c1(65); //c1 = 65; c1{65};
	//char c2('A'); // "hello, world" 문자 하나를 사용할때는 '' , 문자열을 사용할때 ""

	//cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	//// c-style casting
	//cout << (char)65 << endl;
	//cout << (int)'A' << endl;
	//
	//// cpp style
	//cout << char(65) << endl;
	//cout << int('A') << endl;

	//cout << static_cast<char>(65) << endl; // 65를 char 로 변경 => A
	//cout << static_cast<int>('A') << endl; // A를 int 로 변경  => 65

	//char ch(97);
	//cout << ch << endl;

	//cout << static_cast<int>(ch) << endl;
	//cout << ch << endl;

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl; 

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	/*cout << sizeof(char) << endl;
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest() << endl;

	cout << sizeof(unsigned char) << endl;
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;*/

	/*cout << int('\n') << endl; //\n 줄 변경
	cout << "This is first line \n second line\n";
	cout << "This is first line" << endl;
	cout<< "second line";*/

	//cout << int('\t') << endl;
	//cout << "this is first line \t second line"; //\t 탭

	cout << int('\t') << endl;
	cout << "this is first line \a second line " ; // \a 소리

	wchar_t c; // 잘안씀
	char32_t c3;
	
	return 0;
}
