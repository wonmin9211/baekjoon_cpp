#include <iostream>
using namespace std;

int main() {
	int n, m, i, j;
	int temp=0;
	int box[101];
	for (int i = 0; i <= 100; i++) {
		box[i] = i;
	}
	cin >> n >> m;
	for (int k = 1; k <= m; k++) {
		cin >> i >> j;
		temp = box[i];
		box[i] = box[j];
		box[j] = temp;
	}
	for (int i = 1; i <= n; i++) {
		cout << box[i] << " ";
	}
}