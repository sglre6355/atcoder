#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    vector<vector<int>> A(N);
    for (auto &A_i : A) {
        int L_i;
        cin >> L_i;
        A_i.resize(L_i);
        for (int j = 0; j < L_i; ++j) {
            cin >> A_i[j];
        }
    }

    vector<int> C(N);
    for (auto &C_i : C) {
        cin >> C_i;
    }

    long long count = 0;
    for (long long i = 0; i < N; ++i) {
        if (count + C[i] * A[i].size() >= K) {
            cout << A[i][(K - count - 1) % A[i].size()] << endl;
            break;
        }

        count += C[i] * A[i].size();
    }
}
