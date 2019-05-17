#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    n /= 5;
    switch(n) {
        case 20:
        case 19:
            cout << 1 << endl;
            break;
        case 18:
            cout << 2 << endl;
            break;
        case 17:
            cout << 3 << endl;
            break;
        case 16:
            cout << 4 << endl;
            break;
        case 15:
        case 14:
            cout << 5 << endl;
            break;
        case 13:
        case 12:
            cout << 6 << endl;
            break;
        default:
            cout << 7 << endl;
    }
    return 0;
}