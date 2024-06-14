#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int win_required = N / 2 + (N % 2 != 0);
    int score_takahashi = 0, score_aoki = 0;
    char winner;

    for (int i = 0; i < N; ++i) {
        char c = S.at(i);

        if (c == 'T') {
            score_takahashi++;
        } else {
            score_aoki++;
        }

        if (win_required == score_takahashi) {
            winner = 'T';
            break;
        } else if (win_required == score_aoki) {
            winner = 'A';
            break;
        }
    }

    cout << winner << endl;
    
    return 0;
}
