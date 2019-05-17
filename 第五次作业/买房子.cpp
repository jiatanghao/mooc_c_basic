#include <iostream>
using namespace std;
int main() {
    int N, K;
    while(cin>>N>>K){
        double price = 200.0;
        int year = 1;
        double current = N;
        bool flag = true;
        while (current < price) {
            current += N;
            price *= 1.0 + K / 100.0;
            if (year > 20) {
                flag = false;
                cout << "Impossible\n";
                break;
            }
            year++;
        }
        if (flag)
            cout << year << endl;
    }
    return 0;
}