#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;
    
    bool v_found = false;
    bool condition = true;
    string output;

    for (auto& c : S) {
        if (c == '|') {
            if (v_found) {
                condition = false;
                break;
            }
            else
                v_found = true;
        }

        if (c == '*') {
            if (v_found)
                break;
            else {
                condition = false;
                break;
            }
        }
    }

    if (condition)
        output = "in";
    else
        output = "out";

    cout << output << endl;

    return 0;
}
