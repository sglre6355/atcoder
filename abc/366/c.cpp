#include <algorithm>
#include <iostream>
#include <map>

int main() {
    int Q, query_type, x;
    std::cin >> Q;
    std::map<int, int> x_count;

    for (int i = 0; i < Q; ++i) {
        std::cin >> query_type;
        switch (query_type) {
            case 1:
                std::cin >> x;
                x_count[x] += 1;
                break;
            case 2:
                std::cin >> x;
                x_count[x] -= 1;
                if (x_count[x] == 0) {
                    x_count.erase(x);
                }
                break;
            case 3:
                std::cout << x_count.size() << std::endl;
                break;
        }
    }

    return 0;
}
