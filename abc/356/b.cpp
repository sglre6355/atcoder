#include <iostream>

int main() {
    int n, m, t;
    std::cin >> n >> m;
    int as[m], xs[m];

    for (int i = 0; i < m; ++i) {
        std::cin >> as[i];
        xs[i] = 0;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> t;
            xs[j] += t;
        }
    }

    for (int i = 0; i < m; ++i) {
        if (xs[i] < as[i]) {
            std::cout << "No" << std::endl;
            return 0;
        }
    }

    std::cout << "Yes" << std::endl;

    return 0;
}
