#include <iostream>
#include <string>

int main() {
    int N;
    std::string S;

    std::cin >> N >> S;

    bool removed = false;

    for (int i = 0; i < N; ++i) {
        if (!removed && S[i] == 'o') {
            continue;
        }
        removed = true;
        std::cout << S[i];
    }
    std::cout << std::endl;
}
