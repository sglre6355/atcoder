#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int N, K;
vector<int> A;
vector<vector<int>> answers;

void dfs(int i, int rem) {
    if (i > N) {
        A[0] = rem;
        answers.push_back(A);
        return;
    }

    for (int x = 0; i * x <= rem; ++x) {
        A[i - 1] = x;
        dfs(i + 1, rem - i * x);
    }
}

int main() {
    cin >> N >> K;

    A.resize(N);
    dfs(2, K);

    sort(answers.begin(), answers.end());

    for (auto answer : answers) {
        for (auto e : answer) {
            cout << e << ' ';
        }
        cout << endl;
    }
}
