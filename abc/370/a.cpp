#include <iostream>

int main() {
    int L, R;
    std::cin >> L >> R;
    if ((L and R) or !(L or R)) {
        std::cout << "Invalid" << std::endl;
    } else if (L) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
