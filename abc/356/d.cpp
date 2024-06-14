#include <iostream>

int main() {
    unsigned int n, m;
    std::cin >> n >> m;

    int sum = 0;
    for (int k = 0; k < n; ++k) {
        sum += __builtin_popcount(k & m);
    }

    std::cout << sum << std::endl;
    return 0;
}
