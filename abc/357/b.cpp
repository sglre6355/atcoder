#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int lower_n = std::count_if(s.begin(), s.end(), [](char c){ return islower(c); });
    if (lower_n <= s.size() / 2) {
        std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    std::cout << s << std::endl;
    return 0;
}
