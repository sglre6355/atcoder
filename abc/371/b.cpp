#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<bool> is_taro_born_list(n, false);
    int a_i;
    char sex;

    for (int i = 0; i < m; ++i) {
        std::cin >> a_i >> sex;
        if (sex == 'M' and !is_taro_born_list[a_i-1]) {
            std::cout << "Yes" << std::endl;
            is_taro_born_list[a_i-1] = true;
        } else {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}
