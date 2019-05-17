#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int mid = 0;
		for (int i = 0; i < n; i++) {
			int count = 0;
			for (int j = 0; j < n; j++) {
				if (i != j && a[i] > a[j]) {
					count++;
				}
			}
			if (n % 2 == 1 && count == n / 2) {
				mid = a[i];
				break;
			} else if (n % 2 == 0) {
				if (count == n / 2 || count == n / 2 + 1) {
					mid += a[i];
				}
				mid /= 2;
				break;
			}
		}
		cout << mid << endl;
	}
	return 0;
}