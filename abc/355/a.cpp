#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b;

    if (a == b) {
        std::cout << -1 << std::endl;
    } else {
        std::cout << 6 - a - b << std::endl;
    }

    return 0;
}
