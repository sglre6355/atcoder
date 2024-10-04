#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;

    if (A == B) {
        std::cout << 1 << std::endl;
    } else if ((A - B) % 2 != 0) {
        std::cout << 2 << std::endl;
    } else {
        std::cout << 3 << std::endl;
    }

    return 0;
}
