#include <iostream>
#include <vector>

int main() {
    int T, X;
    std::cin >> T >> X;
    std::vector<int> A(T + 1);
    for (auto &A_i : A) {
        std::cin >> A_i;
    }

    int record = A[0];
    std::cout << 0 << ' ' << record << std::endl;

    for (int t = 1; t <= T; ++t) {
        if (std::abs(A[t] - record) >= X) {
            record = A[t];
            std::cout << t << ' ' << record << std::endl;
        }
    }
}
