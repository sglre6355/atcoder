#include <iostream>

int main() {
    int N;
    std::string S, t;
    std::cin >> N >> S;
    for (int i = 1; i < N; ++i) {
        std::cin >> t;
        if (S == "sweet" && t == S && i != N - 1) {
            std::cout << "No" << std::endl;
            return 0;
        }
        S = t;
    }
    std::cout << "Yes" << std::endl;
    return 0;
}
