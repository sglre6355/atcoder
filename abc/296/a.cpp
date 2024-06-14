#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    bool cond = true;

    for (int i = 1; i < N; ++i) {
        if (S.at(i) == S.at(i-1)) {
            cond = false;
            break;
        }
    }

    if (cond) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
