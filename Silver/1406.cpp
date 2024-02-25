#include <iostream>
#include <list>
#include <string.h>
using namespace std;

int main() {
	string N;
	int M;
	char c, d;
	cin >> N;
	cin >> M;
	list<char> l;
	for (auto a : N)
		l.push_back(a);
	auto cursor = l.end();
	for (int i = 0; i < M; i++) {
		cin >> c;
		if (c == 'L') {
			if (cursor == l.begin())
				continue;
			cursor--;
		}
		else if (c == 'D') {
			if (cursor == l.end())
				continue;
			cursor++;
		}
		else if (c == 'B') {
			if (cursor == l.begin())
				continue;
			else
				cursor = l.erase(--cursor);
		}
		else if (c == 'P') {
			cin >> d;
			l.insert(cursor, d);
		}
		
	}
	for (auto a : l)
		cout << a;
}