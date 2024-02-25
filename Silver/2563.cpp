#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x, y;
	int area = 0;
	int paper[100][100] = { 0, };
	for (int i = 0; i < n; i++) {
		cin >> x >> y;

		//색종이 색칠
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				if (paper[j + x][k + y] == 0)
					paper[j + x][k + y] = 1; 
			}
		}
	}
	// 색종이의 넓이
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] == 1)
				area += 1;
		}
	}
	cout << area;
}