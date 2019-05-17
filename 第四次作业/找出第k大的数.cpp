#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if (a[max] < a[j]) {
                max = j;
            }
        }
        if (max != i) {
            int tmp = a[max];
            a[max] = a[i];
            a[i] = tmp;
        }
    }
    cout << a[k-1] << endl;
    return 0;
}