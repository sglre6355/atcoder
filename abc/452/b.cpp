#include <iostream>

int main() {
    int H, W;
    std::cin >> H >> W;

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (i == 0 || i == H - 1 || j == 0 || j == W - 1) {
                std::cout << "#";
            } else {
                std::cout << ".";
            }
        }
        std::cout << std::endl;
    }
}
