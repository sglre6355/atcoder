#include <algorithm>
#include <iostream>

int main() {
    int n, a;
    std::cin >> n >> a;
    int arrival_times[n];

    for (int i = 0; i < n; ++i) {
        std::cin >> arrival_times[i];
    }

    int finish_times[n];

    finish_times[0] = arrival_times[0] + a;
    for (int i = 1; i < n; ++i) {
        finish_times[i] = std::max(arrival_times[i], finish_times[i-1]) + a;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << finish_times[i] << std::endl;
    }

    return 0;
}
