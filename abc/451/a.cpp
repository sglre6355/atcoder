#include <iostream>
#include <string>

int main() {
    std::string in;
    std::cin >> in;
    if (in.size() % 5 == 0) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}
