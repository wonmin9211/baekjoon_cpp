#include <iostream>
using namespace std;

int main() {
	int n,m = 0;
	string l;
	cin >> n;
	m = n / 4;
	for (int i = 0; i < m; i++) 
		l += "long ";
	l += "int";
	cout << l;
}