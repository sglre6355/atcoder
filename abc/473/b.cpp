#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, int> frequencies;
    for (int i = 0; i < N; ++i) {
        int A_i;
        cin >> A_i;
        ++frequencies[A_i];
    }
    int sum = 0;
    for (auto f : frequencies) {
        if (f.second % 2 == 0) {
            continue;
        }
        sum += f.first;
    }
    cout << sum << endl;
}
