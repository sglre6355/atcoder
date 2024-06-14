#include <bits/stdc++.h>
using namespace std;

int main()
{
    long lo = 1;
    long hi, mid;
    int i;
    cin >> hi;
    
    while (lo < hi) {
        mid = (lo + hi) / 2;

        cout << "? " << mid << endl;
        cin >> i;

        if (i == 0)
            lo = mid;
        else
            hi = mid;
    }

    cout << "! " << hi << endl;

    return 0;
}
