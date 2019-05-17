#include <iostream>
#include <iomanip>
using namespace std;

int swap(int a[5][5], int m, int n);
int main()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];
    int n, m;
    cin >> n >> m;
    int ret = swap(a, n, m);
    if (ret) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cout << setw(4) << a[i][j]; 
            }
            cout << endl;
        }
    } else {
        cout << "error\n";
    }
    return 0;
}

int swap(int a[5][5], int m, int n) {
    if (m < 0 || n < 0 || m >= 5 || n >= 5) {
        return 0;
    }
    if (m != n) {
        for (int i = 0; i < 5; i++) {
            int tmp = a[m][i];
            a[m][i] = a[n][i];
            a[n][i] = tmp;
        }
    }
    return 1;
}