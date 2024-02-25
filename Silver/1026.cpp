#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n, j;
	vector<int> A;
	vector<int> B;
	int m;
	int sum = 0;
	int max = 0;
	cin >> n;
	m = n;
	for (int i = 0; i < n; i++) {
		cin >> j;
		A.push_back(j);
	}
	for (int i = 0; i < n; i++) {
		cin >> j;
		B.push_back(j);
	}
	sort(A.begin(), A.end());

	for (int i = 0; i < n; i++) {
		int maxB = *max_element(B.begin(), B.end());
		sum += A[i] * maxB;
		int k = find(B.begin(), B.end(), maxB) - B.begin();
		B.erase(B.begin() + k);
	}
	cout << sum;
}