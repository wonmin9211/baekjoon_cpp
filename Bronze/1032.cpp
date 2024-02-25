#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int N;
	string str[50];
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> str[i];
	}
	char c;
	for (int i = 0; i < str[0].length(); i++) {
		c = str[0][i];
		for (int j = 0; j < N; j++) {
			if (c != str[j][i]) {
				c = '?';
				break;
			}
		}
		cout << c;
	}
} 