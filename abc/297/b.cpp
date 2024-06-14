#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    char c;

    int m = -1;

    bool condition = true;

    bool r_appeared = false;
    bool k_appeared = false;

    for (int i = 0; i < 8; ++i) {
        c = S.at(i);

        if ((c == 'B') && (m == 0 || m == 1)) {
            if (m == i % 2) {
                condition = false;
                break;
            }
        }
        else if (c == 'B') m = i % 2;
        
        if (c == 'K') k_appeared = true;

        if (c == 'R') {
            if (r_appeared && !k_appeared) {
                condition = false;
                break;
            }
            else if (!r_appeared && k_appeared) {
                condition = false;
                break;
            }
            
            r_appeared = true;
        }
    }

    if (condition) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    
    return 0;
}
