#include <iostream>
#include <vector>
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    int N, W;
    std::cin >> N >> W;
    int weights[N], values[N];
    std::vector<std::vector<long long>> dp(N+1, std::vector<long long>(W+1, 0));

    for (int i = 0; i < N; ++i) {
        std::cin >> weights[i] >> values[i];
    }

    for (int i = 0; i < N; ++i) {
        for (int w = 0; w <= W; ++w) {
            if (w - weights[i] >= 0) {
                chmax(dp[i+1][w], dp[i][w-weights[i]]+values[i]);
            }
            chmax(dp[i+1][w], dp[i][w]);
        }
    }

    std::cout << dp[N][W] << std::endl;

    return 0;
}
