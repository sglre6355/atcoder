#include <iostream>

int main() {
    int n, m, h;
    std::cin >> n >> m;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> h;
        m -= h;

        if (m < 0) {
            std::cout << i << std::endl;
            return 0;
        }
    }

    std::cout << n << std::endl;
    return 0;
}
