#include <iostream>

int main() {
    int a_points = 0, b_points = 0, point;
    for (int i = 0; i < 9; ++i) {
        std::cin >> point;
        a_points += point;
    }

    for (int i = 0; i < 8; ++i) {
        std::cin >> point;
        b_points += point;
    }

    std::cout << a_points - b_points + 1 << std::endl;

    return 0;
}
