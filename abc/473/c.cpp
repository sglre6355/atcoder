#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> n_students(K, 0);
    for (int i = 0; i < N; ++i) {
        int A_i;
        cin >> A_i;
        ++n_students[A_i - 1];
    }
    int max = *max_element(n_students.begin(), n_students.end());
    int count = 0;
    for (int n : n_students) {
        if (abs(n - max) > 1) {
            continue;
        }
        ++count;
    }
    cout << count << endl;
}
