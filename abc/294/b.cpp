#include <bits/stdc++.h>
using namespace std;

int main()
{
    const string alphabet("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    int H, W;
    cin >> H >> W;
    int in;
    vector<int> A;
    string end;

    for (int i = 0; i < H*W; i++) {
        cin >> in;
        A.push_back(in);
    }

    for (int i = 0; i < H*W; i++) {
        if ((i + 1) % W == 0)
            end = "\n";
        else
            end = "";
        
        if (A.at(i) == 0)
            cout << '.' << end;
        else {
            int n = A.at(i) - 1;
            cout << alphabet.at(n) << end;
        }
    }

    return 0;
}
