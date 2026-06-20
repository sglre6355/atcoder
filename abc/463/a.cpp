#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if ((double)X / Y == (double)16 / 9) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
