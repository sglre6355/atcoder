#include <algorithm>
#include <cstdlib>
#include <iostream>

int main() {
    int n, h;
    std::cin >> n;
    int h_list[n];

    for (int i = 0; i < n; ++i) {
        std::cin >> h;
        h_list[i] = h;
    }

    int dp[n];
    int step_cost_one, step_cost_two;

    dp[0] = 0;
    dp[1] = abs(h_list[1] - h_list[0]);

    for (int i = 2; i < n; ++i) {
        step_cost_one = abs(h_list[i] - h_list[i-1]);
        step_cost_two = abs(h_list[i] - h_list[i-2]);
        dp[i] = std::min(dp[i-1] + step_cost_one, dp[i-2] + step_cost_two);
    }

    std::cout << dp[n-1] << std::endl;

    return 0;
}
