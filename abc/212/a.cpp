#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;

    if (B == 0) {
        std::cout << "Gold" << std::endl;
    } else if (A == 0) {
        std::cout << "Silver" << std::endl;
    } else {
        std::cout << "Alloy" << std::endl;
    }

    return 0;
}
