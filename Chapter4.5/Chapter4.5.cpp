#include<iostream>
#include<typeinfo>
#include<iomanip> // setprecision사용

// 암시적 형변환 Implicit Type Conversion(coersion)
    // numeric promotion
    // numeric conversion

// 명시적 형변환 Explicit Type Conversion(casting)
int main()
{
    using namespace std;

    //int a = 123;
    

    // float가 double 보다 작은데, 작게 사용하는 데이터 타입을 큰걸로 보낼때는
    // 넓은 곳으로 보내야함(작은곳으로 가면 안됨). 그래서 double d = a 를 사용
    // 숫자 승격(numeric promotion)
    //float a = 1.0f;
    //double d = a; 

    // 숫자 변환(numeric conversion)
    cout << 5u - 10;
    // 우선순위 
    // int < unsigned int < long < unsigned long,
    // long long < unsigned long long < float < double
    // long double

    // 명시적 형변환
    int i = static_cast<int>(4.0);


    //double d = 0.123456789;
    //float f = d;

    //cout << std::setprecision(12) << f << endl;

    //int i = 30000;
    //char c = i;
    //// char은 문자기때문에 확인이 불가, 그래서 static으로 명시적 형변환 사용
    //// int 값이 char(범위 -128~127)보다 커서 출력시 값이 제대로 안나옴
    //cout << static_cast<int>(c) << endl;

    //cout << typeid(a).name() << endl;

    return 0;
}
