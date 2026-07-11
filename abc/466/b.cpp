#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> max_size(M, -1);

    for (int i = 0; i < N; ++i) {
        int C_i, S_i;
        cin >> C_i >> S_i;
        max_size[C_i - 1] = max(max_size[C_i - 1], S_i);
    }

    for (auto e : max_size) {
        cout << e << ' ';
    }
    cout << endl;
}
