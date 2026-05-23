#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;

        vector<int> count(26, 0);
        for (char c : S) {
            count[c - 'a']++;
        }

        int max = *max_element(count.begin(), count.end());
        if (max > (S.size() + 1) / 2) {
            cout << "No" << endl;
            continue;
        }

        vector<pair<int, char>> chars;
        for (int i = 0; i < 26; i++) {
            if (count[i] > 0) {
                chars.push_back({count[i], char('a' + i)});
            }
        }

        sort(chars.rbegin(), chars.rend());

        string solution(S.size(), '.');
        int pos = 0;

        for (auto [count, ch] : chars) {
            while (count--) {
                solution[pos] = ch;
                pos += 2;

                if (pos >= S.size()) {
                    pos = 1;
                }
            }
        }

        cout << "Yes" << endl;
        cout << solution << endl;
    }
}
