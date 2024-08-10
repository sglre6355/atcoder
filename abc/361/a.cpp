#include <iostream>
#include <vector>

int main() {
    int n, k, x, t;
    std::vector<int> a;
    std::cin >> n >> k >> x;
    for (int i = 0; i < n; ++i) {
        std::cin >> t;
        a.push_back(t);
    }
    a.insert(a.begin()+k, x);

    for (auto e : a) {
        std::cout << e << ' ';
    }
    std::cout << std::endl;

    return 0;
}
