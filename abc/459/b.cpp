#include <iostream>
#include <vector>
using namespace std;

int N;
vector<string> S;
vector<int> C;

int main() {
    cin >> N;
    S.resize(N);
    C.resize(N);
    for (auto &s : S) {
        cin >> s;
    }
    for (int i = 0; i < N; ++i) {
        if ('a' <= S[i][0] && S[i][0] <= 'c') {
            C[i] = 2;
        }
        if ('d' <= S[i][0] && S[i][0] <= 'f') {
            C[i] = 3;
        }
        if ('g' <= S[i][0] && S[i][0] <= 'i') {
            C[i] = 4;
        }
        if ('j' <= S[i][0] && S[i][0] <= 'l') {
            C[i] = 5;
        }
        if ('m' <= S[i][0] && S[i][0] <= 'o') {
            C[i] = 6;
        }
        if ('p' <= S[i][0] && S[i][0] <= 's') {
            C[i] = 7;
        }
        if ('t' <= S[i][0] && S[i][0] <= 'v') {
            C[i] = 8;
        }
        if ('w' <= S[i][0] && S[i][0] <= 'z') {
            C[i] = 9;
        }
    }
    for (auto c : C) {
        cout << c;
    }
    cout << endl;
}
