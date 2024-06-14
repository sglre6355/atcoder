#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    long A, B;
    vector<long> vA, vB;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A >> B;
        vA.push_back(A);
        vB.push_back(B);
    }
    
    auto duplicate = adjacent_find(vA.begin(), vA.end());
    bool hasAdjacentDuplicates = duplicate != vA.end();
    
    while (hasAdjacentDuplicates) {
        int i = distance(vA.begin(), duplicate);
        vA.at(i) = vB.at(i);
        duplicate = adjacent_find(vA.begin(), vA.end());
        hasAdjacentDuplicates = duplicate != vA.end();
    }

    string cardNumber;

    for (int i = 0; i < N; i++) {
        cardNumber.push_back(vA.at(i));
    }

}
