#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    
    int sum = A + B;

    int C;
    for (int i = 1; i <= N; ++i) {
        cin >> C;
        if (C == sum) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
