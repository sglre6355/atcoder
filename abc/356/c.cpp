#include <algorithm>
#include <iostream>
#include <set>

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;

    int c, a;
    char r;
    std::set<int> succeeded, failed;

    for (int i = 0; i < m; ++i) {
        int combination = 0;

        std::cin >> c;
        for (int j = 0; j < c; ++j) {
            std::cin >> a;
            combination |= (1<<(a-1));
        }
        std::cin >> r;
        if (r == 'o') {
            succeeded.insert(combination);
        } else {
            failed.insert(combination);
        }
    }

    // if any of successful combinations have less than k keys
    if (std::any_of(succeeded.begin(), succeeded.end(), [k](int o) { return __builtin_popcount(o) < k; })) {
        std::cout << 0 << std::endl;
        return 0;
    }

    for (auto o : succeeded) {
        for (auto x : failed) {
            // if any of failed combinations contain a successful combination
            if ((o&x) >= o) {
                std::cout << 0 << std::endl;
                return 0;
            }
        }
    }

    int sum = 0;

    for (int i = 0; i < (1<<n); ++i) {
        bool satsfies_successful_combinations = std::none_of(succeeded.begin(), succeeded.end(), [i](int o){ return (i&o) >= o; });
        bool satsfies_unsuccessful_combinations = std::all_of(failed.begin(), failed.end(), [i](int x){ return (i&x) ; });
    }

    return 0;
}
