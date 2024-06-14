#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N;
    std::string result(N, 'o');

    for (int i = 2; i < N; i+=3) {
        result.at(i) = 'x';
    }

    std::cout << result << std::endl;

    return 0;
}
