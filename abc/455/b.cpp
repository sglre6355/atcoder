#include <iostream>
#include <vector>

int main() {
    int H, W;
    std::cin >> H >> W;
    std::vector<std::string> S(H);
    for (auto &S_i : S) {
        std::cin >> S_i;
    }

    int count = 0;
    for (int h_1 = 0; h_1 < H; ++h_1) {
        for (int h_2 = h_1; h_2 < H; ++h_2) {
            for (int w_1 = 0; w_1 < W; ++w_1) {
                for (int w_2 = w_1; w_2 < W; ++w_2) {
                    bool satisifies = true;
                    for (int i = h_1; i <= h_2; ++i) {
                        if (!satisifies) {
                            break;
                        }
                        for (int j = w_1; j <= w_2; ++j) {
                            if (S[i][j] != S[h_1 + h_2 - i][w_1 + w_2 - j]) {
                                satisifies = false;
                                break;
                            }
                        }
                    }
                    if (satisifies) {
                        count++;
                    }
                }
            }
        }
    }

    std::cout << count << std::endl;
}
