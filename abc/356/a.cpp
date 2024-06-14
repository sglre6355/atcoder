#include <iostream>

int main() {
    int n, l, r;
    std::cin >> n >> l >> r;

    int i = 1;
    while (i <= n) {
        if (i == l) {
            for (int j = r; j >= l; --j) {
                std::cout << j << ' ';
            }
            i = r + 1;
            continue;
        }
        std::cout << i << ' ';
        ++i;
    }
    std::cout << std::endl;

    return 0;
}
