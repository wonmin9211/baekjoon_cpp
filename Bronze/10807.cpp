#include <iostream>
using namespace std;

int main() {
	int n, a, m = 0;
	int array[100];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> array[i];
	cin >> a;
	for (int i = 0; i < n; i++) {
		if (array[i] == a)
			m++;
	}
	cout << m;
}