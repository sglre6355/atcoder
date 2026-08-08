#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> P(N), indices(N);

    for (int i = 0; i < N; ++i) {
        cin >> P[i];
        --P[i];
        indices[P[i]] = i;
    }

    for (int q = 0; q < Q; ++q) {
        int query_type;
        cin >> query_type;

        if (query_type == 1) {
            int x, y;
            cin >> x >> y;
            --x, --y;

            swap(P[x], P[y]);
            indices[P[x]] = x;
            indices[P[y]] = y;
        } else {
            swap(P, indices);
        }
    }

    for (auto P_i : P) {
        cout << P_i + 1 << ' ';
    }
    cout << endl;
}
