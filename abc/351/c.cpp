#include <iostream>
#include <vector>

void op(std::vector<int> &v) {
    int t;

    if (v.size() == 1 or (v.rbegin()[0] != v.rbegin()[1])) {
        return;
    }

    t = v.back() + 1;
    v.resize(v.size() - 2);
    v.push_back(t);

    op(v);
}

int main() {
    int N, t;
    std::vector<int> balls;

    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        std::cin >> t;
        balls.push_back(t);

        op(balls);
    }

    std::cout << balls.size() << std::endl;

    return 0;
}
