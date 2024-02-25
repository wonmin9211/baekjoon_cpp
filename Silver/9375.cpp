#include <iostream>
using namespace std;

int main() {
	int a, b;
	int sum=0;
	int answer=0;
	cin >> a >> b;

	for (int i = 1; i <=45; i++) {
		for (int j = 1; j <= i; j++) {
			sum++;
			if (a <= sum) {
				answer += i;
				if (sum == b)
					cout << answer;
			}
		}
	}
}