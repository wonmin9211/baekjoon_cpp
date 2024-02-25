#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> v(N, 0);
    int j = 0;
    int i = 0;
    int count = 0;

    cout << "<";
    while (count < N) {
        if (v[j] == 0) {
            i++;
            if (i == K) {
                cout << j + 1;
                v[j] = 1;
                count++;
                if (count < N)
                    cout << ", ";
                i = 0;
            }
        }
        j++;
        if (j == N)
            j = 0;
    }
    cout << ">";
}
