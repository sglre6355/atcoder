#include <iostream>
#include <vector>

int main() {
    int N, Q;
    std::cin >> N >> Q;

    std::vector<int> above(N, -1);
    std::vector<int> below(N, -1);

    int C_i, P_i;
    for (int i = 0; i < Q; ++i) {
        std::cin >> C_i >> P_i;
        --C_i;
        --P_i;

        if (below[C_i] != -1) {
            above[below[C_i]] = -1;
        }

        above[P_i] = C_i;
        below[C_i] = P_i;
    }

    std::vector<int> answer(N, 0);

    for (int i = 0; i < N; ++i) {
        if (below[i] != -1) {
            continue;
        }

        int cursor = i;
        int count = 0;

        while (cursor != -1) {
            ++count;
            cursor = above[cursor];
        }

        answer[i] = count;
    }

    for (auto a : answer) {
        std::cout << a << ' ';
    }
    std::cout << std::endl;
}
