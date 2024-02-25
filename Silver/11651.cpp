#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int x, y;
	vector<pair<int, int>> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back(make_pair(y, x));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		cout << v[i].second << ' ' << v[i].first << "\n";
	}
}