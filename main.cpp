#include <iostream>
using namespace std;
long fib(int n) {
	if (n <= 0) 
        return -1;
	if (n == 1 or n == 2) 
       return 1;
	return fib(n - 1) + fib(n - 2);
}
int main() {
	cout << fib(10);
} 