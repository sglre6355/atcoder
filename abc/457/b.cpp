#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(N);
    for (auto &A_i : A) {
        int L_i;
        cin >> L_i;
        A_i.resize(L_i);
        for (int i = 0; i < L_i; ++i) {
            cin >> A_i[i];
        }
    }
    int X, Y;
    cin >> X >> Y;
    cout << A[X - 1][Y - 1] << endl;
}
