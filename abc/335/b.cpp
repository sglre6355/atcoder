#include <bits/stdc++.h>

int main() {
    int N;
    std::cin >> N;

    for (int x = 0; x <= N; ++x) {
        for (int y = 0; y <= N; ++y) {
            for (int z = 0; z <= N; ++z) {
                if (x + y + z <= N) {
                    std::cout << x << ' '  << y << ' ' << z << std::endl;
                }
            }
        }
    }

    return 0;
}
