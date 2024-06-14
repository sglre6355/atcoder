#include <iostream>

int main() {
    int n, x, y, z;
    std::cin >> n >> x >> y >> z;

    if (x < z < y || x > z > y) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
