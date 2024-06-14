#include <iostream>

bool is_extension(std::string S) {
    int i = 0;

    for (auto c: S) {
        if (c == ' ') {
            continue;
        } else if (c == 'A') {
            if (i == 0) continue;
            else return false;
        } else if (c == 'B') {
            if (i <= 1) i = 1;
            else return false;
        } else if (c == 'C') {
            i = 2;
        }
    }
    
    return true;
}

int main() {
    std::string S;
    std::cin >> S;

    if (is_extension(S)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}
