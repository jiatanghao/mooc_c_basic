#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    n = abs(n);
    int a, b, c;
    c = n % 10;
    n /= 10;
    b = n % 10;
    n /=10;
    a = n;
    cout << a << endl << b << endl << c << endl;
    return 0;
}