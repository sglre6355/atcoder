#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int N, K;
vector<pair<int, int>> covers;

bool solvable_with_gap(int x) {
    int count = 0;
    int prev_R = -1;

    for (auto [R, L] : covers) {
        if (count == 0 || L - prev_R >= x) {
            count++;
            prev_R = R;
        }
    }

    return count >= K;
}

int main() {
    cin >> N >> K;
    covers.resize(N);
    for (auto &cover : covers) {
        cin >> cover.second >> cover.first;
    }

    sort(covers.begin(), covers.end());

    if (!solvable_with_gap(1)) {
        cout << -1 << endl;
        return 0;
    }

    int ok = 1;
    int ng = 1e9;

    while (abs(ok - ng) > 1) {
        auto mid = (ok + ng) / 2;

        if (solvable_with_gap(mid)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }

    cout << ok << endl;
}
