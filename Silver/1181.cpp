#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cmp(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}

int main() {
	int n;
	cin >> n;
	string a[20000];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++) {
		if (a[i] == a[i - 1])
			continue;
		cout << a[i] << endl;
	}
}