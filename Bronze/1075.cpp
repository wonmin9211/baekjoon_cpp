#include <iostream>
using namespace std;

int main() {
	int n, f;
	cin >> n;
	cin >> f;

	int ans, answer=0;
	ans = n - n % 100;

	for (int i = 0; i <= f; i++) {
		if ((ans + i) % f == 0)
			answer = i;
		if (answer == f)
			answer = 0;
	}
	printf("%02d", answer);
}