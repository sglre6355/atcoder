#include <iostream>
#include <set>
#include <stack>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;
    std::vector<std::set<int>> exchange(N + 1);
    int A_i, B_i;
    for (int i = 0; i < M; ++i) {
        std::cin >> A_i >> B_i;
        exchange[A_i].insert(B_i);
    }

    std::vector<int> visited(N + 1, false);
    visited[1] = true;

    std::stack<int> stack;
    int count = 0;

    stack.push(1);

    while (!stack.empty()) {
        int item = stack.top();
        stack.pop();

        count++;

        for (auto next : exchange[item]) {
            if (visited[next]) {
                continue;
            }
            visited[next] = true;
            stack.push(next);
        }
    }

    std::cout << count << std::endl;
}
