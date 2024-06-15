#include <cmath>
#include <iostream>
#include <set>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::set<int> flavour_sales;

    int t = 0;
    for (int i = 0; i < m; ++i) {
        t += std::pow(2, i);
    }

    char c;

    for (int i = 0; i < n; ++i) {
        int s = 0;
        for (int j = 0; j < m; ++j) {
            std::cin >> c;
            if (c == 'x') {
                continue;
            }
            s |= (1<<(m-j-1));
        }

        if (s == t) {
            std::cout << 1 << std::endl;
            return 0;
        }

        flavour_sales.insert(s);
    }

    std::set<int> prev_combinations = flavour_sales, current_combinations;

    for (int i = 2; i <= m; ++i) {
        for (auto p : prev_combinations) {
            for (auto s : flavour_sales) {
                current_combinations.insert(p|s);
            }
        }

        if (current_combinations.find(t) != current_combinations.end()) {
            std::cout << i << std::endl;
            return 0;
        }

        prev_combinations = current_combinations;
        current_combinations = {};
    }
}
