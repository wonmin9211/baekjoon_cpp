#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> pp, sp;
	int p, s;
	vector<int> total;
	for (int i = 0; i < M; i++) {
		cin >> p >> s;
		pp.push_back(p);
		sp.push_back(s);
	}
	int k = *min_element(sp.begin(), sp.end()); // 가장 싼 낱개의 가격
	int j = *min_element(pp.begin(), pp.end()); // 가장 싼 패키지의 가격
	for (int i = 0; i <= (N / 6) + 1; i++) {
		int a = j * i + (N - 6 * i) * k;
		if ((N - 6 * i) < 0)
			total.push_back(j * i);
		else
			total.push_back(a);
	}
	int answer = *min_element(total.begin(), total.end());
	cout << answer;
}