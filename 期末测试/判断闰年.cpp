#include <iostream>
using namespace std;
int main() {
    int year;
    cin >> year;
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            if (year % 3200 != 0) {
                cout << "Y\n";
            } else {
                cout << "N\n";
            }
        } else {
            cout << "N\n";
        }
    } else {
        if (year % 4 == 0) {
            cout << "Y\n";
        } else {
            cout << "N\n";
        }
    }
    return 0;
}