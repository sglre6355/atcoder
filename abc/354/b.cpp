#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> user_names;
    std::string user_name;
    int user_rates[n], rates_sum = 0;

    for (int i = 0; i < n; ++i) {
        std::cin >> user_name >> user_rates[i];
        user_names.push_back(user_name);
        rates_sum += user_rates[i];
    }

    std::sort(user_names.begin(), user_names.end());

    std::cout << user_names[rates_sum % n] << std::endl;

    return 0;
}
