#include <iostream>
using namespace std;
long fib(int n) {
	if (n <= 0) 
       return -1;
	if (n >= 1) {
		cout << "0" << endl;
	}
	if (n >= 2) {
		cout << "1" << endl;
	}
	long r = 0, a = 1;
	for (int i = 2; i < n; ++i) {
		long dev = r + a;
		r = a;
		a = dev;
		cout << a << endl;
	}
	return a;
}
int main() {
	fib(10);
} 