#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int a = 0, b = 1, fib;

    if (n == 0) fib = a;
    else if (n == 1) fib = b;
    else {
        for (int i = 2; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
    }

    cout << "So Fibonacci thu " << n << " la: " << fib << endl;
    return 0;
}
