#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	int max = *max_element(A.begin(), A.end());
	int min = *min_element(A.begin(), A.end());
	int answer = max * min;
	cout << answer;
}