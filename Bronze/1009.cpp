#include <iostream>
using namespace std;

int main() {
	int N, a, b;
	int m;
	cin >> N;
	for (int i = 0; i < N; i++) {
		m = 1;
		cin >> a >> b;
		for (int j = 0; j < b; j++)
			m = (m * a) % 10;
		if (m == 0)
			cout << 10 << endl;
		else
			cout << m << endl;
	}
}