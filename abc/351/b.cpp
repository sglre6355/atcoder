#include <iostream>
#include <vector>

int main() {
    int N, row_index, column_index;
    char c;
    std::vector<char> A;

    std::cin >> N;

    for (int i = 0; i < N*N; ++i) {
        std::cin >> c;
        A.push_back(c);
    }

    for (int i = 0; i < N*N; ++i) {
        std::cin >> c;

        if (A.at(i) != c) {
            row_index = i / N + 1;
            column_index = i % N + 1;
        }
    }

    std::cout << row_index << ' ' << column_index << std::endl;

    return 0;
}
