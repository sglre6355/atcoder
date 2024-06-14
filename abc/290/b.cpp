#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    string S;

    cin >> N >> K;
    cin >> S;

    int failedBegin;

    for (int i = 0; i < N; i++) {
        if (K <= 0) {
            failedBegin = i;
            break;
        }
        
        if (S[i] == 'o')
            K--;

        if (i == N - 1)
            goto end;
    }
    
    S.replace(failedBegin, N - failedBegin, N - failedBegin, 'x');

    end:
        cout << S << endl;

    return 0;
}
