#include <iostream>
#include <string>
using namespace std;

int main() {
    int X;
    cin >> X;
    X -= 1;

    string s = "HelloWorld";
    for (int i = 0; i < s.size(); ++i) {
        if (i == X) {
            continue;
        }
        cout << s[i];
    }
    cout << endl;
}
