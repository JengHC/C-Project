#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main()
{
    short  s = 1;   // 2bytes = 2 * 8 bits = 16 bits
    //int    i = 1;
    //long   l = 1;
    //long long ll = 1;

    /*cout << std::pow(2, sizeof(short) * 8 - 1 ) - 1 << endl;
    cout << std::numeric_limits<short>::max() << endl;
    cout << std::numeric_limits<short>::min() << endl;
    cout << std::numeric_limits<short>::lowest() << endl;*/

    /*s = std::numeric_limits<short>::min();

    cout << "min()" << s << endl;*/

    //s = s - 1;

    //cout << ""<< s << endl; //overflow

    unsigned int i = -1;

    cout << i << endl;

    return 0;

}

