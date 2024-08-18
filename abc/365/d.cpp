#include <algorithm>
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
    int N;
    std::string S;
    std::cin >> N >> S;

    std::vector<std::vector<int>> dp(std::vector(N+1, std::vector(3, 0)));

    for (int i = 1; i <= N; ++i) {
        char c = S[i-1];
        switch (c) {
            case 'R':
                // draw
                chmax(dp[i][0], dp[i-1][1]);
                chmax(dp[i][0], dp[i-1][2]);
                // win
                chmax(dp[i][1], dp[i-1][0]+1);
                chmax(dp[i][1], dp[i-1][2]+1);
                break;
            case 'P':
                // draw
                chmax(dp[i][1], dp[i-1][0]);
                chmax(dp[i][1], dp[i-1][2]);
                // win
                chmax(dp[i][2], dp[i-1][0]+1);
                chmax(dp[i][2], dp[i-1][1]+1);
                break;
            case 'S':
                // draw
                chmax(dp[i][2], dp[i-1][0]);
                chmax(dp[i][2], dp[i-1][1]);
                // win
                chmax(dp[i][0], dp[i-1][1]+1);
                chmax(dp[i][0], dp[i-1][2]+1);
                break;
        }
    }

    std::cout << *std::max_element(dp[N].begin(), dp[N].end()) << std::endl;

    return 0;
}
