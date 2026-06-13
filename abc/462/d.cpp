#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    const int MAX_T = 1e6;
    vector<long long> diff(MAX_T + 3, 0);

    for (int i = 0; i < N; ++i) {
        int S, T;
        cin >> S >> T;

        int L = S;
        int R = T - D;

        if (L <= R) {
            diff[L]++;
            diff[R + 1]--;
        }
    }

    long long count = 0;
    long long cursor = 0;

    for (int x = 1; x <= MAX_T; ++x) {
        cursor += diff[x];
        count += cursor * (cursor - 1) / 2;
    }

    cout << count << endl;
}
