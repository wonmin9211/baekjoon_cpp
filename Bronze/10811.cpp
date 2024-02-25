#include <iostream>
using namespace std;

int main() {
	int n, m;
	int a[100]={0};
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++)
		a[i] = i;

	int i, j;
	while (m--) {
		cin >> i >> j;
		for (int t = 0; t <= (j - i) / 2; t++)
			swap(a[t + i], a[j - t]);
	}
	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";
}