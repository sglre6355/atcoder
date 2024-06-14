#include <iostream>
#include <utility>
#include <vector>

int main() {
    int N, x, y;
    std::vector<std::pair<int, int>> coordinates;

    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        std::cin >> x >> y;
        coordinates.push_back({x, y});
    }
}
