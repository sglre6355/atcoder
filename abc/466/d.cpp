#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> R(M), C(M);
    for (int i = 0; i < M; ++i) {
        cin >> R[i] >> C[i];
        --R[i];
        --C[i];
    }

    vector<bool> row_placed(N, false);
    vector<bool> column_placed(N, false);
    int answer = 0;

    for (int i = M - 1; i >= 0; --i) {
        if (!row_placed[R[i]] && !column_placed[C[i]]) {
            ++answer;
        }
        row_placed[R[i]] = true;
        column_placed[C[i]] = true;
    }

    cout << answer << endl;
}
