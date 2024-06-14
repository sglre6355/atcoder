#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long D;
    cin >> D;

    vector<long> T;
    long t;
    for (int i = 0; i < N; ++i) {
        cin >> t;
        T.push_back(t);
    }
    
    long x = -1;

    for (int i = 0; i < N-1; ++i) {
        if (D >= T.at(i+1) - T.at(i)) {
            x = T.at(i+1);
            break;
        }
    }

    cout << x << endl;

    return 0;
}
