#include <iostream>
#include <set>

int main() {
    int Q, type, h;
    std::multiset<int> trees;
    std::cin >> Q;
    for (int i = 0; i < Q; ++i) {
        std::cin >> type >> h;
        if (type == 1) {
            trees.insert(h);
        } else if (type == 2) {
            auto it = trees.upper_bound(h);
            trees.erase(trees.begin(), it);
        }
        std::cout << trees.size() << std::endl;
    }
}
