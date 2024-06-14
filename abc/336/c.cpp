#include <bits/stdc++.h>

int main() {
    long N;
    std::cin >> N;

    std::set<char> good_digits = {'0', '2', '4', '6', '8'};
    long M = 0;
    std::string M_string;
    long i = 0;

    while (true) {
        M_string = std::to_string(M);
        std::set<char> digits(M_string.begin(), M_string.end());

        if (std::includes(good_digits.begin(), good_digits.end(), digits.begin(), digits.end())) {
            i++;

            if (i == N) {
                std::cout << M << std::endl;
                break;
            }
        }

        M += 2;
    }

    return 0;
}
