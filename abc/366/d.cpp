#include <iostream>

int main() {
    int N, x, y, z, Q, Lx, Rx, Ly, Ry, Lz, Rz, sum;
    std::cin >> N;
    int A_x_y_z_list[N][N][N];
    for (x = 0; x < N; ++x) {
        for (y = 0; y < N; ++y) {
            for (z = 0; z < N; ++z) {
                std::cin >> A_x_y_z_list[x][y][z];
            }
        }
    }
    std::cin >> Q;
    for (int i = 0; i < Q; ++i) {
        std::cin >> Lx >> Rx >> Ly >> Ry >> Lz >> Rz;
        sum = 0;
        for (x = Lx - 1; x < Rx; ++x) {
            for (y = Ly - 1; y < Ry; ++y) {
                for (z = Lz - 1; z < Rz; ++z) {
                    sum += A_x_y_z_list[x][y][z];
                }
            }
        }
        std::cout << sum << '\n';
    }
    return 0;
}
