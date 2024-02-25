#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> a;
	vector <string> b;
	string answer;
	for (int i = 0; i < 3; i++) {
		string k;
		cin >> k;
		if (i == 0 || i == 1) {
			if (k == "black")
				a.push_back(0);
			else if (k == "brown")
				a.push_back(1);
			else if (k == "red")
				a.push_back(2);
			else if (k == "orange")
				a.push_back(3);
			else if (k == "yellow")
				a.push_back(4);
			else if (k == "green")
				a.push_back(5);
			else if (k == "blue")
				a.push_back(6);
			else if (k == "violet")
				a.push_back(7);
			else if (k == "grey")
				a.push_back(8);
			else if (k == "white")
				a.push_back(9);
		}
		if (i == 2) {
			if (k == "black")
				b.push_back("");
			else if (k == "brown")
				b.push_back("0");
			else if (k == "red")
				b.push_back("00");
			else if (k == "orange")
				b.push_back("000");
			else if (k == "yellow")
				b.push_back("0000");
			else if (k == "green")
				b.push_back("00000");
			else if (k == "blue")
				b.push_back("000000");
			else if (k == "violet")
				b.push_back("0000000");
			else if (k == "grey")
				b.push_back("00000000");
			else if (k == "white")
				b.push_back("000000000");
		}
	}
	if (a[0] == 0 && a[1] == 0)
		cout << "0";
	else if (a[0] == 0 && a[1] != 0) {
		cout << a[1];
		cout << b[0];
	}
	else{
		for (int i = 0; i < 2; i++) {
			cout << a[i];
		}
		cout << b[0];
	}
}