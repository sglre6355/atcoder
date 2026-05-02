#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> A(3, vector<int>(6));
    for (auto &A_i : A) {
        for (auto &A_i_j : A_i) {
            cin >> A_i_j;
        }
    }

    vector<vector<double>> B(3, vector<double>(3));
    for (int i = 0; i < 3; ++i) {
        B[i][0] = count(A[i].begin(), A[i].end(), 4) / (double)6;
        B[i][1] = count(A[i].begin(), A[i].end(), 5) / (double)6;
        B[i][2] = count(A[i].begin(), A[i].end(), 6) / (double)6;
    }

    double answer = 0;
    vector<int> indices = {0, 1, 2};
    do {
        answer += B[0][indices[0]] * B[1][indices[1]] * B[2][indices[2]];
    } while (next_permutation(indices.begin(), indices.end()));

    cout << answer << endl;
}
