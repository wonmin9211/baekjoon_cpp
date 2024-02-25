#include <iostream>
using namespace std;

int main() {
	int n, m, i, j, k;
	int box[100]={0,};
	cin >> n >> m;
	for (int a = 0; a < m; a++) {
		cin >> i >> j >> k;
		for (int b = i-1; b < j; b++) {
			box[b] = k;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << box[i] << ' ';
	}
}