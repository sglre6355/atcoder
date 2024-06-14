#include <bits/stdc++.h>
using namespace std;

int main()
{
    long N;
    char c;

    bool foundBar = false;
    long maxL = 0;
    long oLength = 0;

    cin >> N;
    for (long i = 0; i < N; ++i) {
        cin >> c;
        if (c == '-') {
            foundBar = true;
            if (oLength > maxL)
                maxL = oLength;
            oLength = 0;
        }

        if (c == 'o')
            oLength++;

        if (i == N - 1 && foundBar && oLength > maxL)
            maxL = oLength;
    }
    
    if (maxL == 0)
        maxL = -1;

    cout << maxL << endl;

    return 0;
}
