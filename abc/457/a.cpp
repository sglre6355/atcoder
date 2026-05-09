#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X;
    cin >> N;
    vector<int> A(N);
    for (auto &A_i: A) {
        cin >> A_i;
    }
    cin >> X;

    cout << A[X - 1] << endl;
}
