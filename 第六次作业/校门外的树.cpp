#include <iostream>
using namespace std;

int main() {
    int l, m;
    cin >> l >> m;
    int a[m][2];
    int b[l+1] = {0};
    for (int i = 0; i < m; i++) {
        cin >> a[i][0] >> a[i][1];
    }
    for (int i = 0; i < m; i++) {
        for (int j = a[i][0]; j <= a[i][1]; j++) {
            b[j] = 1;
        }
    }
    int count = 0;
    for (int i = 0; i <= l; i++) {
        if (b[i] == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}