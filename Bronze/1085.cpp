#include <iostream>
using namespace std;

int main() {
	int x, y, w, h;
	int r = 0;
	cin >> x >> y >> w >> h;
	r = x;
	if (r > y)
		r = y;
	if (r > w-x)
		r = w - x;
	if (r > h-y)
		r = h - y;

	cout << r;
}