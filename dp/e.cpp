#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

const long long INF = 1LL << 60;

const int MAX_N = 100;
const int MAX_V = MAX_N * 1e3;

int main() {
    long long N, W;
    cin >> N >> W;
    vector<long long> weights(N), values(N);
    for (int i = 0; i < N; ++i) {
        cin >> weights[i] >> values[i];
    }

    vector<vector<long long>> dp(N + 1, vector<long long>(MAX_V, INF));
    dp[0][0] = 0;

    for (int i = 0; i < N; ++i) {
        for (int v = 0; v < MAX_V; ++v) {
            if (v - values[i] >= 0) {
                dp[i + 1][v] =
                    min(dp[i + 1][v], dp[i][v - values[i]] + weights[i]);
            }
            dp[i + 1][v] = min(dp[i + 1][v], dp[i][v]);
        }
    }

    long long result = 0;
    for (int v = 0; v < MAX_V; ++v) {
        if (dp[N][v] <= W) {
            result = v;
        }
    }
    cout << result << endl;
}
