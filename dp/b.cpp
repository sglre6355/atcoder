#include <iostream>
template <class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template <class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, k, h;

    std::cin >> n >> k;
    int h_list[n];

    for (int i = 0; i < n; ++i) {
        std::cin >> h;
        h_list[i] = h;
    }

    int dp[n], cost;

    for (int i = 0; i < n; ++i) dp[i] = 1e9;

    dp[0] = 0;

    for (int i = 1; i < n; ++i) {
        int j_boundary;

        if (i < k) {
            j_boundary = i;
        } else {
            j_boundary = k;
        }

        for (int j = 1; j <= j_boundary; ++j) {
            chmin(dp[i], dp[i-j] + abs(h_list[i] - h_list[i-j]));
        }
    }

    std::cout << dp[n-1] << std::endl;

    return 0;
}
