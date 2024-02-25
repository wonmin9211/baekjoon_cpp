#include <iostream>
#include <string>
using namespace std;

int main() {
	string n;
	cin >> n;

	for (int i = 0; i < n.size(); i++) {
		if (n[i] == '0') {
			if (i == 0)
				cout << "0";
			else
				cout << "000";
		}
		else if (n[i] == '1') {
			if (i == 0)
				cout << "1";
			else
				cout << "001";
		}
		else if (n[i] == '2') {
			if (i == 0)
				cout << "10";
			else
				cout << "010";
		}
		else if (n[i] == '3') {
			if (i == 0)
				cout << "11";
			else
				cout << "011";
		}
		else if (n[i] == '4')
			cout << "100";
		else if (n[i] == '5')
			cout << "101";
		else if (n[i] == '6')
			cout << "110";
		else if (n[i] == '7')
			cout << "111";
	}
}