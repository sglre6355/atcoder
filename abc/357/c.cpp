#include <cmath>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::vector<std::string>> carpets;

    carpets.push_back({"#"});

    for (int i = 1; i <= n; ++i) {
        std::vector<std::string> top_and_bottom;
        std::vector<std::string> middle;
        for (std::string row : carpets[i-1]) {
            top_and_bottom.push_back(row + row + row);
            middle.push_back(row + std::string(std::pow(3, i-1), '.') + row);
        }
        auto carpet = top_and_bottom;
        carpet.insert(carpet.end(), middle.begin(), middle.end());
        carpet.insert(carpet.end(), top_and_bottom.begin(), top_and_bottom.end());
        carpets.push_back(carpet);
    }

    for (auto row : carpets[n]) {
        std::cout << row << std::endl;
    }

    return 0;
}
