#include <cstdlib>
#include <iostream>

int main() {
    int N, T, A;
    std::cin >> N >> T >> A;
    if ((N - T - A) < std::abs(T - A)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}
