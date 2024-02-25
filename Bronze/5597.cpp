#include <iostream>
using namespace std;

int main() {
	int student[28];
	int b[30];
	for (int i = 0; i < 30; i++)
		b[i] = i + 1;
	for (int i = 0; i < 28; i++){
		cin >> student[i];
		for (int j = 0; j < 30; j++) {
			if (b[j] == student[i])
				b[j] = 0;
		}
	}
	for (int i = 0; i < 30; i++) {
		if (b[i] != 0)
			cout << b[i] << endl;
	}
}