#include <iostream>
using namespace std;

int func(int n) {
	if (n < 1) return 0;
	cout << n << endl;
	return func(n / 5) + func(n / 3);
}

int main(void) {
	cout << " oi " << func(47) << endl;
}