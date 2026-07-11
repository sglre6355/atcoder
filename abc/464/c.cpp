#include <algorithm>
#include <deque>
#include <iostream>
#include <tuple>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    deque<int> colors = deque(N + 1, 0);

    deque<tuple<int, int, int>> observations;
    for (int i = 0; i < N; ++i) {
        int D_i, A_i, B_i;
        cin >> A_i >> D_i >> B_i;

        colors[A_i]++;

        if (A_i != B_i) {
            observations.push_back({D_i, A_i, B_i});
        }
    }

    sort(observations.begin(), observations.end());

    int num_colors = 0;
    for (int i = 1; i <= N; ++i) {
        if (colors[i] != 0) {
            num_colors++;
        }
    }

    for (int i = 1; i <= M; ++i) {
        while (!observations.empty()) {
            auto [D_i, A_i, B_i] = observations.front();
            if (D_i != i) {
                break;
            }
            colors[A_i]--;
            if (colors[A_i] == 0) {
                num_colors--;
            }
            colors[B_i]++;
            if (colors[B_i] == 1) {
                num_colors++;
            }
            observations.pop_front();
        }

        cout << num_colors << endl;
    }
}
