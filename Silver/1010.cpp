#include <iostream>
using namespace std;

int main() {
	int t, n, m;
	int answer;
	cin >> t;

	for (int i = 0; i < t; i++) {
		answer = 1;
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			answer *= m - i;
			answer /= 1 + i;
		}
		cout << answer << endl;
	}

}