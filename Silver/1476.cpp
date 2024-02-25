#include <iostream>
using namespace std;

int main() {
	int E, S, M;
	cin >> E >> S >> M;
	int e = 0, s = 0, m = 0;
	int year = 0;
	while (true) {
		e++; s++; m++; year++;
		if (e > 15)
			e = 1;
		if (s > 28)
			s = 1;
		if (m > 19)
			m = 1;
		if (e == E && s == S && m == M)
			break;
	}
	cout << year;
}