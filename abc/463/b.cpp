#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    char X;
    cin >> N >> X;

    vector<string> S_list(N);
    for (int i = 0; i < N; ++i) {
        cin >> S_list[i];
    }

    bool ok = false;

    for (auto S : S_list) {
        if (S[X - 'A'] == 'o') {
            ok = true;
            break;
        }
    }

    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
