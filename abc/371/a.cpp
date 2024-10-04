#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);

    if (s == "< > >" or s == "> < <") {
        std::cout << 'A' << std::endl;
    } else if (s == "< < <" or s == "> > >") {
        std::cout << 'B' << std::endl;
    } else if (s == "< < >" or s == "> > <") {
        std::cout << 'C' << std::endl;
    }

    return 0;
}
