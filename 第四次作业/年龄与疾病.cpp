#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b[4] = {0};
    for (int i = 0; i < n; i++) {
        if (a[i] <= 18) {
            b[0]++;
        } else if (a[i] <= 35) {
            b[1]++;
        } else if (a[i] <= 60) {
            b[2]++;
        } else if (a[i] > 60) {
            b[3]++;
        }
    }
    printf("1-18: %.2f%%\n", b[0] * 100.0 / n);
    printf("19-35: %.2f%%\n", b[1] * 100.0 / n);
    printf("36-60: %.2f%%\n", b[2] * 100.0 / n);
    printf("60-: %.2f%%\n", b[3] * 100.0 / n);
    return 0;
}