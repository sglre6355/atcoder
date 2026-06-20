#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> takahashis(N);
    for (auto &takahashi : takahashis) {
        cin >> takahashi.first >> takahashi.second;
    }

    int Q;
    cin >> Q;

    vector<pair<int, int>> queries(Q);
    for (int i = 0; i < Q; ++i) {
        int T;
        cin >> T;
        queries[i] = {T, i};
    }

    sort(queries.rbegin(), queries.rend());

    vector<int> answers(Q);
    int tallest = 0;
    int cursor = N - 1;

    for (auto [T, index] : queries) {
        while (cursor >= 0 && takahashis[cursor].second > T) {
            tallest = max(tallest, takahashis[cursor].first);
            --cursor;
        }

        answers[index] = tallest;
    }

    for (auto answer : answers) {
        cout << answer << endl;
    }
}
