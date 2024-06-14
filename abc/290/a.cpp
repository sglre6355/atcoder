#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    int A[N];
    int sum = 0;
    int input, solved;

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> input;
        solved = input - 1;
        sum += A[solved];
    }

    cout << sum << endl;

    return 0;
}
