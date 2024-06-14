#include <bits/stdc++.h>
using namespace std;

int main()
{
    long N, K;
    vector<long> A;
    long input;

    cin >> N >> K;
    for (long i = 0; i < N; i++) {
        cin >> input;
        A.push_back(input);
    }

    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());

    long prev = -1; 

    for (long i = 0; i < K; i++) {
        if (A.size() <= i) {
            break;
        }

        if (i == A.at(i)) {
            prev = i;
        }
        else {
            break;
        }
    }

    cout << prev + 1 << endl;

    return 0;
}
