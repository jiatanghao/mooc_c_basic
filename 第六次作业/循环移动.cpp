#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    m %= n;
    for (int i = 0; i < m; i++) {
        int key = a[n-1];
        for (int j = n - 1; j > 0; j--) {
            a[j] = a[j-1];
        }
        a[0] = key;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}