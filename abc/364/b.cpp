#include <iostream>
#include <string>
#include <vector>

int main() {
    int H, W, current_i, current_j, target_i, target_j;
    std::string row;
    std::vector<std::string> grid;
    std::string X;

    std::cin >> H >> W >> current_i >> current_j;

    for (int i = 0; i < H; ++i) {
        std::cin >> row;
        grid.push_back(row);
    }
    
    std::cin >> X;

    for (auto c : X) {
        target_i = current_i;
        target_j = current_j;
        
        switch (c) {
            case 'L':
                target_j -= 1;
                break;
            case 'R':
                target_j += 1;
                break;
            case 'U':
                target_i -= 1;
                break;
            case 'D':
                target_i += 1;
                break;
        }

        if (!(1 <= target_i and target_i <= H and 1 <= target_j and target_j <= W)) {
            continue;
        }

        if (grid[target_i-1][target_j-1] == '#') {
            continue;
        }

        current_i = target_i;
        current_j = target_j;
    }

    std::cout << current_i << ' ' << current_j << std::endl;

    return 0;
}
