#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
	int k, m;
	cin >> k;
	vector<int> v;
	for (int i = 0; i < k; i++) {
		cin >> m;
		if (m == 0)
			v.pop_back();
		else
			v.push_back(m);
	}
	int sum = accumulate(v.begin(), v.end(), 0);
	cout << sum;
}