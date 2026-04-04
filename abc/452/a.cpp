#include <iostream>

int main() {
    int M, D;
    std::cin >> M >> D;

    if ((M == 1 && D == 7) || ((M == D) && (3 <= M && M <= 9) && (M % 2 != 0))) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}
