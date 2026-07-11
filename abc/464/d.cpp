#include <algorithm>
#include <deque>
#include <iostream>
#include <limits>
using namespace std;
typedef long long ll;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        string S;
        cin >> N >> S;
        deque<int> Xs(N), Ys(N - 1);
        for (auto &X : Xs) {
            cin >> X;
        }
        for (auto &Y : Ys) {
            cin >> Y;
        }

        deque<deque<ll>> dp(N, deque<ll>(2, numeric_limits<ll>::min()));
        dp[0][0] = (S[0] == 'S' ? 0 : -Xs[0]);
        dp[0][1] = (S[0] == 'R' ? 0 : -Xs[0]);

        for (int i = 1; i < N; ++i) {
            for (int prev = 0; prev < 2; ++prev) {
                for (int next = 0; next < 2; ++next) {
                    auto cost = 0;
                    if ((next == 0 && S[i] == 'R') ||
                        (next == 1 && S[i] == 'S')) {
                        cost = Xs[i];
                    }
                    auto gain = (prev == 1 && next == 0 ? Ys[i - 1] : 0);
                    dp[i][next] =
                        max(dp[i][next], dp[i - 1][prev] - cost + gain);
                }
            }
        }

        cout << max(dp[N - 1][0], dp[N - 1][1]) << endl;
    }
}
