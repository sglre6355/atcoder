#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    vector<double> scores;
    int tmp;

    cin >> N;
    for (int i = 0; i < 5 * N; i++) {
        cin >> tmp;
        scores.push_back(tmp);
    }

    sort(scores.begin(), scores.end());
    
    scores.erase(scores.begin(), scores.begin() + N);
    for (int i = 0; i < N; i++) {
        scores.pop_back();
    }
    
    double scoreSum = 0;

    for (auto score : scores) {
        scoreSum += score;
    }
    
    double takahashiScore = scoreSum / (3 * N);

    cout << takahashiScore << endl;

    return 0;
}
