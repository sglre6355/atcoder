#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n, m, t;
    std::cin >> n >> m;
    std::vector<int> as, bs;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> t;
        as.push_back(t);
    }

    for (int i = 0; i < m; ++i) {
        std::cin >> t;
        bs.push_back(t);
    }

    std::sort(as.begin(), as.end());
    std::sort(bs.begin(), bs.end());

    auto it = std::upper_bound(as.begin(), as.end(), bs[0]);
    as.erase(as.begin(), it);

    int sum = 0;

    for (auto b : bs) {
        auto it = std::lower_bound(as.begin(), as.end(), b);

        if (it == as.end()) {
            std::cout << -1 << std::endl;
            return 0;
        }

        sum += *it;
        as.erase(it);
    }

    std::cout << sum << std::endl;

    return 0;
}

