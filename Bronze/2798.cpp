#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, c;
	int blackjack, answer = 0;
	cin >> N >> M;
	vector<int> card;
	for (int i = 0; i < N; i++) {
		cin >> c;
		card.push_back(c);
	}
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				blackjack = card[i] + card[j] + card[k];
				if (blackjack <= M && answer < blackjack)
					answer = blackjack;
			}
		}
	}
	cout << answer;
}