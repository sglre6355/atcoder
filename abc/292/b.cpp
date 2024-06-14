#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q, c, x;
    cin >> N >> Q;
    int players[N];
    vector<pair<int, int>> events;
    fill(players, players+N, 0);

    for (int i = 0; i < Q; i++) {
        cin >> c >> x;
        auto pair = make_pair(c, x);
        events.push_back(pair);
    }

    for (auto e : events) {
        c = e.first;
        x = e.second;

        switch (c) {
            case 1:
                players[x - 1] += 1;
                break;
            case 2:
                players[x - 1] += 2;
                break;
            case 3:
                if (players[x - 1] > 1) {
                    cout << "Yes" << endl;
                }
                else {
                    cout << "No" << endl;
                }
                break;
        }
    }
}
