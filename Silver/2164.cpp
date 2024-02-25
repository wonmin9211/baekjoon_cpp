#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	queue<int> v;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		v.push(i);
	}

	while (v.size() > 1) {
		v.pop();
		int top = v.front();
		v.pop();
		v.push(top);
	}
	cout << v.front();
}