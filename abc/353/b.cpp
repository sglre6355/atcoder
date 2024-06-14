#include <iostream>

int main() {
    int N, K, seats_left, A, count = 0;

    std::cin >> N >> K;

    seats_left = K;

    for (int i = 0; i < N; ++i) {
        std::cin >> A;

        if (seats_left >= A) {
            seats_left -= A;
        } else {
            count += 1;
            seats_left = K;
            seats_left -= A;
        }
    }

    std::cout << count + 1 << std::endl;
    return 0;
}
