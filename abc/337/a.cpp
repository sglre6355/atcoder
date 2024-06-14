#include <iostream>

int main() {
    int N, X = 0, Y = 0, x, y;

    std::cin >> N;
    
    for (int i = 0; i < N; ++i) {
        std::cin >> x >> y;
        X += x;
        Y += y;
    }

    if (X > Y) {
        std::cout << "Takahashi" << std::endl;
    } else if (X < Y) {
        std::cout << "Aoki" << std::endl;
    } else {
        std::cout << "Draw" << std::endl;
    }
}
