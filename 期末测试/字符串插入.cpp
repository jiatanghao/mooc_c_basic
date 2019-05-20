#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[14], substr[4];
    while (cin >> str && cin >> substr) {
        int max = 0;
        for (int i = 1; str[i] != '\0'; i++) {
            if (str[i] > str[max]) {
                max = i;
            }
        }
        for (int i = strlen(str); i > max; i--) {
            str[i+strlen(substr)] = str[i];
        }
        for (int i = 0; i < strlen(substr); i++) {
            str[i+max+1] = substr[i];
        }
        cout << str << endl;
    }
    return 0;
}