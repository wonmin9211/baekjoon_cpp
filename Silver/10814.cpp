#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	vector<pair<int, string>> p;
	int a;
	string n;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a >> n;
		p.push_back(make_pair(a, n));
	}
	stable_sort(p.begin(), p.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
		if (a.first != b.first)
			return a.first < b.first;
		return false; // return false로 함으로써 두 pair의 순서를 변경하지 않도록 함.
	});
	for (int i = 0; i < N; i++) {
		cout << p[i].first << " " << p[i].second << "\n";
	}
	
}