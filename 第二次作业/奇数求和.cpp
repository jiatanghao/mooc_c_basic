#include <cstdio>

int main() {
    int m, n;
    printf("%d %d\n", &m, &n);
    if(m % 2 == 0)
        m++;
    int sum = 0;
    for (int i = m; i <= n; i+= 2) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}