#include <cstdio>
#include <map>
using namespace std;

int main()
{
    int n, k;
    int a[1000];
    scanf("%d %d", &n, &k);
    for (auto i = 0; i < n; i++) {
        scanf("%d", a + i);
    }
	map<int, int> map_data;
    for (auto i = 0; i < n; i++) {
        map_data.insert(pair<int, int>(a[i], i));
    }
    map<int, int>::iterator iter;
    for (auto i = 0; i < n; i++) {
        iter = map_data.find(k - a[i]);
        if (iter != map_data.end() && iter->first != i) {
            printf("yes");
            return 0;
        }
    }
    printf("no");
	return 0;
}