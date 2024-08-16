#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int N, T, P, L_i;
    std::vector<int> L_list;

    std::cin >> N >> T >> P;
    for (int i = 0; i < N; ++i) {
        std::cin >> L_i;
        L_list.push_back(L_i);
    }

    std::sort(L_list.begin(), L_list.end());

    std::cout << std::max(T - L_list[N - P], 0) << std::endl;

    return 0;
}
