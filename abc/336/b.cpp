#include <bits/stdc++.h>

int main() {
    int N;
    std::cin >> N;

    std::string binary = std::bitset<64>(N).to_string();
    int ctz = 0;

    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            break;
        }

        ctz++;
    }

    std::cout << ctz << std::endl;

    return 0;
}
