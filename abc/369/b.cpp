#include <cstdlib>
#include <iostream>
#include <map>

int main() {
    int N, A_i, k_L = 0, k_R = 0, exhaustion = 0;
    char S_i;
    std::map<char, int> previous_keys;
    std::cin >> N;

    previous_keys['L'] = previous_keys['R'] = 0;

    for (int i = 0; i < N; ++i) {
        std::cin >> A_i >> S_i;
        if (previous_keys[S_i] == 0) {
            previous_keys[S_i] = A_i;
            continue;
        }
        exhaustion += std::abs(A_i-previous_keys[S_i]);
        previous_keys[S_i] = A_i;
    }

    std::cout << exhaustion << std::endl;

    return 0;
}
