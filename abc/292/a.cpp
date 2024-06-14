#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;
    cin >> S;

    for (auto c : S) {
        T += toupper(c);
    }

    cout << T << endl;

    return 0;
}
