#include <iostream>

int main() {
    int N, H, h;

    std::cin >> N >> H;

    for (int i=1; i < N; ++i) {
        std::cin >> h;
        if (H < h) {
            std::cout << i + 1 << std::endl;
            return 0;
        }
    }

    std::cout << -1 << std::endl;
    return 0;
}
