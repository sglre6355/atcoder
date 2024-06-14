#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, C;
    vector<vector<int>> vvA;
    vector<int> vB;
    int A, B;

    cin >> N >> M >> C;
    
    for (int i = 0; i < M; i++) {
        cin >> B;
        vB.push_back(B);
    }

    for (int i = 0; i < N; i++) {
        vector<int> vA;
        for (int j = 0; j < M; j++) {
            cin >> A;
            vA.push_back(A);
        }
        vvA.push_back(vA);
    }

    int sum = 0;
    int correct = 0;

    for (auto vA : vvA) {
        sum = 0;
        for (int i = 0; i < M; i++) {
            sum += vA.at(i) * vB.at(i);
        }
        sum += C;

        if (sum > 0) {
            correct++;
        }
    }
    
    cout << correct << endl;

    return 0;
}
