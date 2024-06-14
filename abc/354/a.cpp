#include <cmath>
#include <iostream>

int main() {
    int h;
    std::cin >> h;
    int p = 0, i = 0;

    while (p <= h) {
        p += std::pow(2, i);
        ++i;
    }

    std::cout << i << std::endl;

    return 0;
}
