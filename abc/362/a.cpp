#include <algorithm>
#include <iostream>

int main() {
    int R, G, B, n;
    std::string C;
    std::cin >> R >> G >> B >> C;

    if (C == "Red") {
        n = std::min(G, B);
    } else if (C == "Green") {
        n = std::min(R, B);
    } else {
        n = std::min(R, G);
    }

    std::cout << n << std::endl;

    return 0;
}
