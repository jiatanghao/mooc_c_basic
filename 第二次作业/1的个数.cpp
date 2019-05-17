#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        int count = 0;
        while (k > 0) {
            if (k % 2 == 1) {
                count++;
            }
            k /= 2;
        }
        printf("%d\n", count);
    }
    return 0;
}