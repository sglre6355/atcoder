#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

int main() {
    int n;
    long a_i;
    std::vector<std::pair<long, int>> a_i_and_i;

    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        std::cin >> a_i;
        a_i_and_i.push_back({a_i, i});
    }

    std::sort(a_i_and_i.begin(), a_i_and_i.end(), [](auto &left, auto &right){ return left.first > right.first; });

    std::cout << a_i_and_i[1].second << std::endl;

    return 0;
}
