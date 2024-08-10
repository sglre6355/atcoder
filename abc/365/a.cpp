#include <iostream>

int main() {
    int y, d = 365;
    std::cin >> y;

    bool is_multiple_of_4 = (y % 4 == 0), is_multiple_of_100 = (y % 100 == 0), is_multiple_of_400 = (y % 400 == 0);
    
    if ((is_multiple_of_4 and !is_multiple_of_100) or is_multiple_of_400) {
        d += 1;
    }

    std::cout << d << std::endl;

    return 0;
}
