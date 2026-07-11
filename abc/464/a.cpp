#include <iostream>
using namespace std;

int main() {
    int east = 0, west = 0;
    string S;

    cin >> S;
    for (auto c : S) {
        if (c == 'E') east++;
        if (c == 'W') west++;
    }

    if (east > west) {
        cout << "East" << endl;
    } else {
        cout << "West" << endl;
    }
}
