#include <iostream>
using namespace std;

int main() {
	int a;
	int n[42]={0};
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		cin >> a;
		n[a % 42] = 1;
	}
	for (int i = 0; i < 42; i++) {
		if (n[i] == 1)
			sum++;
	}
	cout << sum;
}