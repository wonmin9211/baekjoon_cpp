#include <iostream>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

bool mode(const pair<int, int>& v1, const pair<int, int>& v2) {
	if (v1.second == v2.second) {
		return v1.first < v2.first;
	}
	return v1.second > v2.second;
}
int main() {
	int N;
	double sum = 0;
	vector<int> v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int j;
		cin >> j;
		v.push_back(j);
		sum += j;
	}
	// mean
	int mean = (int)floor((sum / N) + 0.5);
	cout << mean << "\n";

	// median
	sort(v.begin(), v.end());
	int median = v[N / 2];
	cout << median << "\n";
	
	// mode
	vector < pair<int, int>> s;
	for (int i = 0; i < v.size(); i++) {
		if (s.empty()) {
			s.push_back(pair<int, int>(v[i], 1));
			continue;
		}
		else if (s.back().first == v[i])
			s.back().second += 1;
		else
			s.push_back(pair<int, int>(v[i], 1));
	}
	sort(s.begin(), s.end(), mode);
	if (s.size() == 1)
		cout << s[0].first << "\n";
	else if (s[0].second == s[1].second) {
		cout << s[1].first << "\n";
	}
	else
		cout << s[0].first << "\n";

	// range

	int range = v.back() - v.front();
	cout << range << "\n";
}