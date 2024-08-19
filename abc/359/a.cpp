#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int counter = 0;
    std::string S_i;

    for (int i = 0; i < N; ++i) {
        std::cin >> S_i;
        if (S_i == "Takahashi") {
            counter++;
        }
    }

    std::cout << counter << std::endl;

    return 0;
}
