#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    if (S.find('R') < S.find('M')) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
