#include <cstdio>
void swap(int* a, int* b);
const int LEN = 1000;

int main()
{
	int n;
    scanf("%d", &n);
    int a[LEN];
    // 使用scanf输入n个整数
    for (auto i = 0; i < n; i++) {
        scanf("%d", a + i);
    }
    //冒泡排序算法
    for (auto i = 0; i < n - 1; i++) {
        for (auto j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a + j, a + j + 1);
            }
        }
    }
    //输出，一行一个数
    for (auto i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
	return 0;
}
/**
 * 交换两个数
 */
void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
