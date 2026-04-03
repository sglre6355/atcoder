#include <iostream>
#include <limits>
#include <set>
#include <stack>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<std::vector<int>> A(N, std::vector<int>(N));
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            std::cin >> A[i][j];
            A[j][i] = A[i][j];
        }
    }

    bool constructable = true;
    std::vector<std::set<int>> ancestors(N);
    std::vector<std::set<int>> candidate(N);
    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j || A[0][j] + A[j][i] != A[0][i]) {
                continue;
            }
            ancestors[i].insert(j);
        }

        if (ancestors[i].empty()) {
            constructable = false;
        }

        int parent = -1;
        int shortest = std::numeric_limits<int>::max();
        for (const auto &j : ancestors[i]) {
            if (A[i][j] == shortest) {
                constructable = false;
            }
            if (A[i][j] < shortest) {
                parent = j;
                shortest = A[i][j];
            }
        }

        candidate[i].insert(parent);
        candidate[parent].insert(i);
    }

    std::vector<std::vector<int>> B(N, std::vector<int>(N));
    for (int start = 1; start < N; ++start) {
        std::stack<int> s;
        s.push(start);
        while (s.size() > 0) {
            int parent = s.top();
            s.pop();
            for (auto child : candidate[parent]) {
                if (start == child || B[start][child] != 0) {
                    continue;
                }
                B[start][child] = B[start][parent] + A[parent][child];
                if (A[start][child] != B[start][child]) {
                    constructable = false;
                }
                s.push(child);
            }
        }
    }

    if (constructable) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}
