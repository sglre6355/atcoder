#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> m(N);

    for (int i = 0; i < N; ++i) {
        int K;
        cin >> K;
        for (int j = 0; j < K; ++j) {
            int A_i_j;
            cin >> A_i_j;
            m[A_i_j - 1].push_back(i + 1);
        }
    }

    for (auto s : m) {
        cout << s.size() << ' ';
        for (auto e : s) {
            cout << e << ' ';
        }
        cout << endl;
    }
}
