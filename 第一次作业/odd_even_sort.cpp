#include <cstdio>
void swap(int* a, int* b);

int main()
{
	int a[10];
    for (auto i = 0; i < 10; i++) {
        scanf("%d", a + i);
    }
    auto l = 0, r = 9;
    while (l <= r) {
        bool leftIsOdd = (a[l] % 2 == 1);
        bool rightIsEven = (a[r] % 2 == 0);
        if (leftIsOdd) {
            l++;
        } else if (rightIsEven) {
            r--;
        } else if (!leftIsOdd && !rightIsEven) {
            swap(a + l, a + r);
        }
    }
    int start = 0, end = l;
    for (auto i = start; i < end - 1; i++) {
        for (auto j = start + 1; j < end + start - i; j++) {
            if (a[j - 1] > a[j]) {
                swap(a + j - 1, a + j);
            }
        }
    }
    start = l, end = 10;
    for (auto i = start; i < end - 1; i++) {
        for (auto j = start + 1; j < end + start - i; j++) {
            if (a[j - 1] > a[j]) {
                swap(a + j - 1, a + j);
            }
        }
    }
    for (auto i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
	return 0;
}

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}