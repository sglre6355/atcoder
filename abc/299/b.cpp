#include <bits/stdc++.h>
#include <iterator>
using namespace std;

int main()
{
    long N, T;
    vector<long> C, R;
    long in;
    
    vector<long>::iterator itr;

    cin >> N >> T;
    for (int i = 0; i < N; ++i) {
        cin >> in;
        C.push_back(in);
    }
    for (int i = 0; i < N; ++i) {
        cin >> in;
        C.push_back(in);
    }
    

    
    itr = find(C.begin(), C.end(), T);
    
    if (itr == C.end()) {

    }

}
