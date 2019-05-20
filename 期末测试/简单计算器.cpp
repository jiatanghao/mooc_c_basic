#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, y;
	char op;
	cin >> x >> y >> op;
	switch(op) {
		case '+':
			cout << x + y;
			break;
		case '-':
			cout << x - y;
			break;
		case '*':
			cout << x * y;
			break;
		case '/':
			if (y == 0) {
				cout << "Divided by zero!";
			} else {
				cout << x / y;
			}
			break;
		default:
			cout << "Invalid operator!";
	}
	return 0;
}