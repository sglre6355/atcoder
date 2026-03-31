#include <iostream>
#include <iterator>
#include <set>
#include <string>

std::set<int> pows_of_two_of_length[10];
std::set<int> memo[10];

std::set<int> good_integers_of_length(int k) {
    if (!memo[k].empty()) {
        return memo[k];
    }

    std::set<int> result;

    result.insert(pows_of_two_of_length[k].begin(),
                  pows_of_two_of_length[k].end());

    for (int i = 1; i < k; ++i) {
        for (int a : pows_of_two_of_length[i]) {
            for (int b : good_integers_of_length(k - i)) {
                result.insert(std::stoi(std::to_string(a) + std::to_string(b)));
                result.insert(std::stoi(std::to_string(b) + std::to_string(a)));
            }
        }
    }

    memo[k] = result;

    return result;
}

int main() {
    int N;
    std::cin >> N;

    for (int i = 0;; ++i) {
        int p = 1 << i;
        int p_len = std::to_string(p).length();

        if (p_len > 9) {
            break;
        }

        pows_of_two_of_length[p_len].insert(p);
    }

    std::set<int> good_integers;
    for (int k = 1; k < 10; ++k) {
        good_integers.merge(good_integers_of_length(k));
    }

    std::cout << *std::next(good_integers.begin(), N - 1) << std::endl;
}
