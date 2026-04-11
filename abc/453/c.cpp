#include <algorithm>
#include <iostream>
#include <vector>

int max_sign_change(std::vector<int> L, int n, double prev) {
    if (n == L.size()) {
        return 0;
    }

    double pos = prev + L[n];
    double neg = prev - L[n];

    int pos_change = (prev * pos < 0) ? 1 : 0;
    int neg_change = (prev * neg < 0) ? 1 : 0;

    return std::max(pos_change + max_sign_change(L, n + 1, pos),
                    neg_change + max_sign_change(L, n + 1, neg));
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> L(N);
    for (auto &L_i : L) {
        std::cin >> L_i;
    }

    std::cout << max_sign_change(L, 0, 0.5) << std::endl;
}
