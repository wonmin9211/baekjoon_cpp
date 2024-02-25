#include <iostream>
using namespace std;

int main() {
	int n;
	string name[100];
	int d[100], m[100], y[100];
	int first, second;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name[i] >> d[i] >> m[i] >> y[i];
	}
	int year = 0, month = 0, day = 0;
	for (int i = 0; i < n; i++) { // first
		if (year < y[i]) {
			year = y[i];
			first = i;
		}
		else if (year == y[i]) {
			if (month < m[i]) {
				month = m[i];
				first = i;
			}
			else if (month == m[i]) {
				if (day < d[i]) {
					day = d[i];
					first = i;
				}
			}
		}
	}
	int year1 = 2010, month1 = 12, day1 = 31;
	for (int i = 0; i < n; i++) { // second
		if (year1 > y[i]) {
			year1 = y[i]; month1 = m[i]; day1 = d[i];
			second = i;
		}
		else if (year1 == y[i]) {
			if (month1 > m[i]) {
				month1 = m[i]; day1 = d[i];
				second = i;
			}
			else if (month1 == m[i]) {
				if (day1 > d[i]) {
					day1 = d[i];
					second = i;
				}
			}
		}
	}
	cout << name[first] << "\n" << name[second];
}