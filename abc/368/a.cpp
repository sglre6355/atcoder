#include <iostream>
#include <vector>

int main() {
    int N, K;
    std::vector<int> A;

    std::cin >> N >> K;
    A.resize(N);
    for (auto &A_i : A) {
        std::cin >> A_i;
    }

    A.insert(A.end(), A.begin(), A.end());
    for (int i = N - K; i < 2*N - K; ++i) {
        std::cout << A[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
