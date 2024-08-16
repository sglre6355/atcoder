#include <cmath>
#include <iostream>

int main() {
    int R;
    std::cin >> R;

    int n;
    if (R <= 99) {
        n = 100 - R;
    } else if (R <= 199) {
        n = 200 - R;
    } else if (R <= 299) {
        n = 300 - R;
    }

    std::cout << n << std::endl;

    return 0;
}
