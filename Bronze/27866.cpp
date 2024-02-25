#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	int i;
	cin >> S;
	cin >> i;
	for (int j = 0; j < S.length(); j++) {
		if (j == i - 1)
			cout << S[j];
	}
}