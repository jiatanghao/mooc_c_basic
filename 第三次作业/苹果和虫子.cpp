#include <iostream>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    int count = y / x;
    if (y % x != 0) {
        count++;
    }
    cout << n - count << endl;
    return 0;
}