#include <algorithm>
#include <iostream>

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    int n;
    std::cin >> n;
    int rewards[n+1][3], dp[n+1][3];

    for (int i = 0; i < 3; ++i) {
        rewards[0][i] = 0;
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; ++i) {
        std::cin >> rewards[i][0] >> rewards[i][1] >> rewards[i][2];
        for (int j = 0; j < 3; ++j) {
            dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                if (j == k) continue;
                chmax(dp[i][j], dp[i-1][k] + rewards[i][j]);
            }
        }
    }

    std::cout << *std::max_element(dp[n], dp[n] + 3) << std::endl;

    return 0;
}
