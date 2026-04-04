#include <iostream>
#include <map>
#include <vector>

int main() {
    int N, M;
    std::cin >> N;
    std::vector<int> A(N), B(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i] >> B[i];
        B[i]--;
    }
    std::cin >> M;
    std::vector<std::string> S(M);
    for (auto &s : S) {
        std::cin >> s;
    }

    std::vector<std::map<char, bool>> has_matching_s(N);
    for (int i = 0; i < N; ++i) {
        for (const auto &s : S) {
            if (s.size() != A[i]) {
                continue;
            }
            has_matching_s[i][s[B[i]]] = true;
        }
    }

    for (int j = 0; j < M; ++j) {
        if (S[j].size() != N) {
            std::cout << "No" << std::endl;
            continue;
        }
        bool satisfies = true;
        for (int i = 0; i < N; ++i) {
            if (!has_matching_s[i][S[j][i]]) {
                satisfies = false;
                break;
            }
        }
        if (satisfies) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }
}
