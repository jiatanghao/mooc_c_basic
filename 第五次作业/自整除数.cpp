#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 10; i <= n; i++) {
        int k = 0;
        int tmp = i;
        while (tmp > 0) {
            k += tmp % 10;
            tmp /= 10;
        }
        if (i % k == 0) {
            cout << i << endl;
        }
    }
    return 0;
}