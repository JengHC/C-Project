#include <iostream>

using namespace std;

int main()
{
    
    bool bValue = false;
    char chValue = '65';
    float fValue = 3.141592f;
    double dValue = 3.141592;

    int i = (int)3.1415;// copy initialization
    int a((int)3.14);   // direct initialization
    int b{ 123 };   // uniform initialization

    //int k, l, m = 123; //이런식으로 초기화 하면 안됨.

    int k = 0, l = 456, m = 123; //int k = 0, l(456), m{123}; 이렇게 사용가능

    /*cout << sizeof(bool) << endl;
    cout << sizeof(bValue) << endl;*/

    /*auto aValue = 3.141592;
    auto aValue2 = 3.141592f;*/

    /*cout << bValue << endl;
    cout << sizeof(aValue) << endl;
    cout << sizeof(aValue2) << endl;*/

    return 0;
}
