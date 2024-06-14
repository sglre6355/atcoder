#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int temp;
    vector<int> As;
    
    for (int i = 0; i < N; i++) {
        cin >> temp;
        if (temp % 2 == 0) {
            As.push_back(temp);
        }
    }

    for (auto& A : As) {
        cout << A << " ";
    }
    
    return 0;
}
