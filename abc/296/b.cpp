#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    
    string column = "abcdefgh";

    for (int i = 7; i >= 0; --i) {
        cin >> S;

        auto found = S.find('*');

        if (found == string::npos)
            continue;
        else {
            cout << column.at(found) << i + 1 << endl;
            break;
        }
    }
    
    return 0;
}
