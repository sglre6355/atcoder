#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int N, M;
    cin >> N >> M;
    long in;
    vector<long> A(N), B(M), C;
    
    for (auto& a : A) {
        cin >> in;
        a = in;
    }

    for (auto& b : B) {
        cin >> in;
        b = in;
    }
    
    C.insert(C.end(), A.begin(), A.end());
    C.insert(C.end(), B.begin(), B.end());
    sort(C.begin(), C.end());

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N + M; j++) {
            if (A.at(i) == C.at(j))
                cout << j + 1 << ' ';
        }
    }
    cout << endl;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N + M; j++) {
            if (B.at(i) == C.at(j))
                cout << j + 1 << ' ';
        }
    }

    return 0;
}
