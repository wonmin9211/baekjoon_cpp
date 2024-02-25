#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T, N;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		vector<string> S;
		vector<int> L;
		for (int j = 0; j < N; j++) {
			string s; int l;
			cin >> s >> l;
			S.push_back(s);
			L.push_back(l);
		}
		int max = max_element(L.begin(), L.end()) - L.begin();
		cout << S[max]<<"\n";
	}
}