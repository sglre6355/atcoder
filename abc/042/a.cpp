#include <iostream>

int main() {
    int input;
    int fives = 0, sevens = 0;
    for (int i = 0; i < 3; ++i) {
        std::cin >> input;
        if (input == 5) {
            ++fives;
        }
        if (input == 7) {
            ++sevens;
        }
    }

    if (fives == 2 and sevens == 1) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
