#include <cstdio>
using namespace std;

int main() {
    int k;
    cin >> k;
    int a0, a1, a2;
    a0 = a1 = a2 = 0;
    int a[k];
    for (int i = 0; i < k; i++) {
        scanf("%d", a + i);
    }
    for (int i = 0; i < k; i++) {
        if (a[i] == 1) {
            a0++;
        } else if (a[i] == 5) {
            a1++;
        } else if (a[i] == 10) {
            a2++;
        }
    }
    cout << a0 << endl << a1 << endl << a2 << endl;
    return 0;
}