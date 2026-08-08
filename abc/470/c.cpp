#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    set<int> positives;
    int answer = 0;

    for (int q = 0; q < Q; ++q) {
        int query_type;
        cin >> query_type;

        if (query_type == 1) {
            int x;
            cin >> x;
            --x;

            auto old = A[x];
            answer ^= old;
            ++A[x];
            answer ^= A[x];

            if (old == 0) {
                positives.insert(x);
            }
        } else {
            for (auto it = positives.begin(); it != positives.end();) {
                auto p = *it;

                answer ^= A[p];
                --A[p];
                answer ^= A[p];

                if (A[p] == 0) {
                    it = positives.erase(it);
                } else {
                    ++it;
                }
            }
        }

        cout << answer << endl;
    }
}
