#include <iostream>
#include <set>

int main() {
    int N, M;
    std::cin >> N >> M;

    bool first_answer = true, second_answer = true;
    std::set<int> set;

    int F_i;
    for (int i = 0; i < N; ++i) {
        std::cin >> F_i;
        if (set.find(F_i) != set.end()) {
            first_answer = false;
        }
        set.insert(F_i);
    }
    if (set.size() != M) {
        second_answer = false;
    }

    for (auto flag : {first_answer, second_answer}) {
        if (flag) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }
}
