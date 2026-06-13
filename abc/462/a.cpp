#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    for (auto c : S) {
        if (48 <= c && c <= 57) {
            cout << c;
        }
    }

    cout << endl;
}
