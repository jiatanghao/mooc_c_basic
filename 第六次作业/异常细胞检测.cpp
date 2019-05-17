#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            int left = a[i][j-1] - a[i][j];
            int right = a[i][j+1] - a[i][j];
            int top = a[i-1][j] - a[i][j];
            int bottom = a[i+1][j] - a[i][j];
            if (left >= 50 && right >= 50 && top >= 50 && bottom >= 50) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}