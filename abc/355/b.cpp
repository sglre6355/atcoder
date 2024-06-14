#include <algorithm>
#include <deque>
#include <iostream>

char popminfront(std::deque<int>& a, std::deque<int>& b) {
    if (a.front() < b.front()) {
        a.pop_front();
        return 'a';
    } else {
        b.pop_front();
        return 'b';
    }
}

int main() {
    int n, m, t;
    std::deque<int> a, b;
    std::cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        std::cin >> t;
        a.push_back(t);
    }

    for (int i = 0; i < m; ++i) {
        std::cin >> t;
        b.push_back(t);
    }

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    char prev, min;
    std::string result = "No";

    for (int i = 0; i < n + m; ++i) {
        min = popminfront(a, b);

        if (i != 0 and min == prev) {
            result = "Yes";
            break;
        }
        if (a.empty() or b.empty()) {
            if (a.size() > 1 or b.size() > 1) {
                result = "Yes";
            }
            break;
        }
        prev = min;
    }

    std::cout << result << std::endl;

    return 0;
}
