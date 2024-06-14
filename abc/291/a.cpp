#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        if (isupper(S.at(i))) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
