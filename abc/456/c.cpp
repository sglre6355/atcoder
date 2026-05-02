#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    string S;
    cin >> S;

    vector<int> dp(S.size());
    dp[0] = 1;

    for (int i = 0; i < S.size() - 1; ++i) {
        if (S[i + 1] != S[i]) {
            dp[i + 1] = dp[i] + 1;
        } else {
            dp[i + 1] = 1;
        }
    }

    cout << accumulate(dp.begin(), dp.end(), 0LL) % 998244353 << endl;
}
