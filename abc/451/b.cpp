#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> this_year(M), next_year(M);

    int a, b;
    for (int i = 0; i < N; ++i) {
        std::cin >> a >> b;
        this_year[a - 1]++;
        next_year[b - 1]++;
    }

    for (int i = 0; i < M; ++i) {
        std::cout << next_year[i] - this_year[i] << std::endl;
    }
}
