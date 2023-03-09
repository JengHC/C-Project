#include <iostream>

using namespace std;

int multiTwoNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;
	return sum;
}

int main()
{
	cout << multiTwoNumbers(1,2) << endl;
	cout << multiTwoNumbers(3,4) << endl;
	cout << multiTwoNumbers(8,13) << endl;

	return 0;
}