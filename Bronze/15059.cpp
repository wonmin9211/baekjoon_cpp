#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> v(3);
	vector <int> m(3);
	int answer = 0;
	cin >> v[0] >> v[1] >> v[2];
	cin >> m[0] >> m[1] >> m[2];
	for (int i = 0; i < 3; i++) {
		if (v[i] - m[i] < 0)
			answer += m[i] - v[i];
	}
	cout << answer;
}