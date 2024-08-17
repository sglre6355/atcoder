#include <iostream>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    if ((B < C and (A < B or C < A)) or (B > C and (A < B and C < A))) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
