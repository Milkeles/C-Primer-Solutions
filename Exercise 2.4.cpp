#include <iostream>
using namespace std;

int main()
{
	unsigned u = 10, u2 = 42;
	cout << u2 - u << endl; // 42 - 10 = 32 (unsigned).
	cout << u - u2 << endl; // 2^32 + 10 - 42 = 2^32 - 32 = 4294967264 (unsigned).
	int i = 10, i2 = 42;
	cout << i2 - i << endl; // 42 - 10 = 32 (signed).
	cout << i - i2 << endl; // 42 - 10 = -32 (signed).
	cout << i - u << endl; // 10 - 10 = 0 (unsigned).
	cout << u - i << endl; // 10 - 10 = 0 (unsigned).
}
