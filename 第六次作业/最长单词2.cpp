#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[500];
    char max_word[500];
    int max_len = 0, len;
    while(cin >> s) {
        len = strlen(s);
        if (s[len - 1] == '.') {
            s[--len] = '\0';
        }
        if (len > max_len) {
            max_len = len;
            strcpy(max_word, s);
        }
    }
    cout << max_word;
    return 0;
}