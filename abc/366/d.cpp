#include <iostream>
#include <vector>

int main() {
    int N, A, Q, L_x, L_y, L_z, R_x, R_y, R_z, partial_sum;
    std::cin >> N;
    std::vector<std::vector<std::vector<int>>> S(N+1, std::vector(N+1, std::vector(N+1, 0)));

    for (int x = 1; x <= N; ++x) {
        for (int y = 1; y <= N; ++y) {
            for (int z = 1; z <= N; ++z) {
                std::cin >> A;

                int S_x_minus_one = S[x-1][y][z];
                int S_y_minus_one = S[x][y-1][z];
                int S_z_minus_one = S[x][y][z-1];

                int S_xy_minus_one = S[x-1][y-1][z];
                int S_yz_minus_one = S[x][y-1][z-1];
                int S_xz_minus_one = S[x-1][y][z-1];

                int S_xyz_minus_one = S[x-1][y-1][z-1];

                S[x][y][z] = A + S_x_minus_one + S_y_minus_one + S_z_minus_one - S_xy_minus_one - S_yz_minus_one - S_xz_minus_one + S_xyz_minus_one;
            }
        }
    }

    std::cin >> Q;
    for (int i = 0; i < Q; ++i) {
        std::cin >> L_x >> R_x >> L_y >> R_y >> L_z >> R_z;
        partial_sum = S[R_x][R_y][R_z] - S[L_x-1][R_y][R_z] - S[R_x][L_y-1][R_z] - S[R_x][R_y][L_z-1] + S[L_x-1][L_y-1][R_z] + S[R_x][L_y-1][L_z-1] + S[L_x-1][R_y][L_z-1] - S[L_x-1][L_y-1][L_z-1];
        std::cout << partial_sum << std::endl;
    }

    return 0;
}
