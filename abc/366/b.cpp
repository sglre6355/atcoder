#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    int N, M = 0;
    std::string S_i;
    std::vector<std::string> S_list;

    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        std::cin >> S_i;
        if (S_i.size() > M) {
            M = S_i.size();
        }
        S_list.push_back(S_i);
    }

    std::vector<std::string> rT_list(M);

    for (auto S_i : S_list) {
        for (int j = 0; j < M; ++j) {
            if (j < S_i.size()) {
                rT_list[j].push_back(S_i[j]);
            } else if (j >= S_i.size() and rT_list[j].size() != 0) {
                rT_list[j].push_back('*');
            }
        }
    }

    for (auto rT_i : rT_list) {
        std::reverse(rT_i.begin(), rT_i.end());
        std::cout << rT_i << std::endl;
    }

    return 0;
}
