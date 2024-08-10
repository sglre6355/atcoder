#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    int N;
    long X, Y, t;
    std::vector<long> sweetness_list, saltiness_list;
    
    std::cin >> N >> X >> Y;
    for (int i = 0; i < N; ++i) {
        std::cin >> t;
        sweetness_list.push_back(t);
    }
    for (int i = 0; i < N; ++i) {
        std::cin >> t;
        saltiness_list.push_back(t);
    }

    std::sort(sweetness_list.begin(), sweetness_list.end(), std::greater<>());
    std::sort(saltiness_list.begin(), saltiness_list.end(), std::greater<>());

    int min_by_sweetness = 0, min_by_saltiness = 0;
    long sweetness_sum = 0, saltiness_sum = 0;

    while (sweetness_sum <= X and min_by_sweetness < N) {
        sweetness_sum += sweetness_list[min_by_sweetness];
        min_by_sweetness += 1;
    }

    while (saltiness_sum <= Y and min_by_saltiness < N) {
        saltiness_sum += saltiness_list[min_by_saltiness];
        min_by_saltiness += 1;
    }

    std::cout << std::min(min_by_sweetness, min_by_saltiness) << std::endl;

    return 0;
}
