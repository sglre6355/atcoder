#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> frequency;
    int maximum_frequency = 0;

    for (int i = 0; i < N; ++i) {
        int C_i;
        cin >> C_i;

        int f = ++frequency[C_i];
        if (f > maximum_frequency) {
            maximum_frequency = f;
        }
    }

    cout << N - maximum_frequency << endl;
}
