#include <iostream>
using namespace std;
const int PI = 3.14159;
int main() {
    int h, r;
    cin >> h >> r;
    double v = PI * r * r * h;
    int n = (int)(20000 / v) + 1;
    cout << n << endl;
}