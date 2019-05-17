#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", a + i);
    }
    int start = 0, end = n - 1;
    while (start < end) {
        int tmp = a[start];
        a[start] = a[end];
        a[end] = tmp;
        start++;
        end--;
    }
    for (int i = 0; i < n; i++) {
        printf("%d \n", a[i]);
    }
    return 0;
}