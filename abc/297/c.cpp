#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    
    vector<string> Ss;
    string S;

    for (int i = 0; i < H; ++i) {
        cin >> S;
        for (int j = 0; j < W-1; ++j) {
            if (S.at(j) == 'T' && S.at(j+1) == 'T') {
                S[j] = 'P';
                S[j+1] = 'C';
            }
        }

        Ss.push_back(S);
    }

    for (int i = 0; i < H; ++i) {
        cout << Ss.at(i) << endl;
    }

    return 0;
}
