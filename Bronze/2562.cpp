#include <iostream>
using namespace std;

int main() {
	int a, n = 0, maxn, max = 0;
	for (int i = 0; i < 9; i++) {
		cin >> a;
		n++;
		if (max < a) {
			max = a;
			maxn = n;
		}
	}
	cout << max << endl << maxn;
}