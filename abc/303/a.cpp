#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S, T;
    bool isSimilar = true;
    cin >> N >> S >> T;

    for (int i = 0; i < N; ++i) {
        string x = string(1, S.at(i));
        string y = string(1, T.at(i));

        if (x == y) {
            continue;
        } else if (x+y == "1l" || x+y == "l1" || x+y == "0o" || x+y == "o0") {
            continue;
        } else {
            isSimilar = false;
            break;
        }
    }

    if (isSimilar) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
