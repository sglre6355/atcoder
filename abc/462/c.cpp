#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> coordinates(N);
    for (int i = 0; i < N; ++i) {
        cin >> coordinates[i].first >> coordinates[i].second;
    }

    sort(coordinates.begin(), coordinates.end());

    int count = 0;
    int min_y = N + 1;

    for (auto c : coordinates) {
        if (c.second < min_y) {
            count++;
        }
        min_y = min(c.second, min_y);
    }

    cout << count << endl;
}
