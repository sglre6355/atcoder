#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<std::vector<int>> A;
    for (int i = 0; i < N; ++i) {
        std::vector<int> A_i;
        int A_ij;
        for (int j = 0; j <= i; ++j) {
            std::cin >> A_ij;
            A_i.push_back(A_ij);
        }
        A.push_back(A_i);
    }

    int i = 1;
    for (int j = 1; j <= N; ++j) {
        if (i >= j) {
            i = A[i-1][j-1];
        } else {
            i = A[j-1][i-1];
        }
    }

    std::cout << i << std::endl;

    return 0;
}
