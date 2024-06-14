#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    
    for (int i = 1; i <= S.length()/2; ++i) {
        char a = S.at(2*i-2);
        char b = S.at(2*i-1);
        S[2*i-1] = a;
        S[2*i-2] = b;
    }
    
    cout << S << endl;

    return 0;
}
