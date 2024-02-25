#include <iostream>
using namespace std;

int main() {
	int X;
	cin >> X;
	int count = 0;
	int s[] = { 64, 32, 16, 8, 4, 2, 1 };
	for (int i = 0; i < 7; i++) {
		if (X >= s[i]) {
			X -= s[i];
			count++;
		}
		if (X == 0)
			break;
	}
	cout << count;
}