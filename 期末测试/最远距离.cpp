#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double a[n][2];
    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
    }
    double max = 0.0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double distance = sqrt(pow(a[j][0] - a[i][0], 2.0) + pow(a[j][1] - a[i][1], 2.0));
            max = distance > max ? distance : max;
        }
    }
    cout << fixed << setprecision(4) << max << endl;
    return 0;
}