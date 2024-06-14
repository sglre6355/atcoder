#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

const int TEN_TO_EIGHT = 100000000;

int main() {
    int N, a, sum = 0;
    std::vector<int> A;

    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        std::cin >> a;
        A.push_back(a % TEN_TO_EIGHT);
    }

    std::sort(A.begin(), A.end());

    int count = 0;
    for (int i = 0; i < A.size(); ++i) {
        for (int j = i + 1; j < A.size(); ++j) {
            if (A[i] + A[j] <= TEN_TO_EIGHT) continue;
            count += 1;
        }
    }

    int ans = std::accumulate(A.begin(), A.end(), 0) * (A.size() - 1) - (TEN_TO_EIGHT * count);

    std::cout << ans << std::endl;

    return 0;
}
