#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S;
    vector<pair<int, int>> coordinatesLog;

    cin >> N >> S;
    
    pair<int, int> coordinates = make_pair(0, 0);
    coordinatesLog.push_back(coordinates);

    for (int i = 0; i < N; i++) {
        char move = S.at(i);
        
        switch (move) {
            case 'R':
                coordinates.first++;
                break;
            case 'L':
                coordinates.first--;
                break;
            case 'U':
                coordinates.second++;
                break;
            case 'D':
                coordinates.second--;
                break;
        }

        coordinatesLog.push_back(coordinates);
    }
    
    sort(coordinatesLog.begin(), coordinatesLog.end());
    bool hasDuplicates = unique(coordinatesLog.begin(), coordinatesLog.end()) != coordinatesLog.end();

    if (hasDuplicates) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    
    return 0;
}
