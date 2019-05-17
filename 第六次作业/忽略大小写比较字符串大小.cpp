#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[80], s2[80];
    cin.getline(s1, 80);
    cin.getline(s2, 80);
    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] >= 'A' && s1[i] <= 'Z') {
            s1[i] = s1[i] + 'a' - 'A';
        }
    }
    for (int i = 0; i < strlen(s2); i++) {
        if (s2[i] >= 'A' && s2[i] <= 'Z') {
            s2[i] = s2[i] + 'a' - 'A';
        }
    }
    int result = strcmp(s1, s2);
    if (result > 0) {
        cout << ">\n";
    } else if (result < 0) {
        cout << "<\n";
    } else {
        cout << "=\n";
    }
    return 0;
}