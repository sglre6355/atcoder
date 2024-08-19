#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int N;
    std::vector<int> A;

    std::cin >> N;
    A.resize(2*N);
    for (auto &A_i : A) {
        std::cin >> A_i;
    }

    int counter = 0;
    std::vector<int> found(N+1, 0);

    for (int i = 1; i <= 2*N; ++i) {
        if (found[A[i-1]] and i - found[A[i-1]] == 2) {
            counter++;
        } else {
            found[A[i-1]] = i;
        }
    }

    std::cout << counter << std::endl;

    return 0;
}
