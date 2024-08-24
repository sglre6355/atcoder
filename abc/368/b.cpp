#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> A(N);
    for (auto &A_i : A) {
        std::cin >> A_i;
    }

    int count = 0;
    while (std::count_if(A.begin(), A.end(), [](int A_i){ return A_i > 0; }) > 1) {
        std::sort(A.begin(), A.end(), std::greater<>());
        A[0]--;
        A[1]--;
        count++;
    }

    std::cout << count << std::endl;

    return 0;
}
