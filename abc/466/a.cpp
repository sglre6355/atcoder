#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool happy = false;
    for (int i = 0; i < N; ++i) {
        int X_i;
        cin >> X_i;
        if (X_i >= 0) {
            happy = true;
            break;
        }
    }

    if (happy) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}
