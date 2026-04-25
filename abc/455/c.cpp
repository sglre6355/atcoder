#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    int N, K;
    std::cin >> N >> K;
    std::vector<int> A(N);
    for (auto &A_i : A) {
        std::cin >> A_i;
    }

    std::sort(A.begin(), A.end());
    long long partial_sum = 0;
    std::vector<long long> B;
    for (int i = 0; i < N - 1; ++i) {
        partial_sum += A[i];
        if (A[i] != A[i + 1]) {
            B.push_back(partial_sum);
            partial_sum = 0;
        }
    }
    partial_sum += A[N - 1];
    B.push_back(partial_sum);

    std::sort(B.begin(), B.end());

    if (B.size() <= K) {
        std::cout << 0 << std::endl;
    } else {
        long long sum = std::accumulate(B.begin(), B.end() - K, 0LL);
        std::cout << sum << std::endl;
    }
}
