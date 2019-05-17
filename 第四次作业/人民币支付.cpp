#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    int a[6];
    a[0] = m / 100;
    m -= a[0] * 100;
    a[1] = m / 50;
    m -= a[1] * 50;
    a[2] = m / 20;
    m -= a[2] * 20;
    a[3] = m / 10;
    m -= a[3] * 10;
    a[4] = m / 5;
    m -= a[4] * 5;
    a[5] = m;
    for (int i = 0; i < 6; i++) {
        cout << a[i] << endl;
    }
    return 0;
}