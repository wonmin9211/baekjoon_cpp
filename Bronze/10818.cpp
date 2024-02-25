#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int a, min = 1000010, max = -1000010;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (min > a)
			min = a;
		if (max < a)
			max = a;
	}
	cout << min << ' ' << max;
}