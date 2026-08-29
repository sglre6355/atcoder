#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &A_i : A) {
        cin >> A_i;
    }
    cout << accumulate(A.begin() + N / 2, A.end(), 0) << endl;
}
