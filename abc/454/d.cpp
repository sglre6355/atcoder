#include <iostream>
#include <string>
using namespace std;

string standardized(const string &S) {
    string T;

    for (auto c : S) {
        T.push_back(c);
        if (T.size() < 4) {
            continue;
        }
        if (T.substr(T.size() - 4, 4) == "(xx)") {
            T.replace(T.size() - 4, 4, "xx");
        }
    }

    return T;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        string A, B;
        cin >> A >> B;

        if (standardized(A) == standardized(B)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
