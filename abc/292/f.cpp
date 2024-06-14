#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    cout << fixed << setprecision(20) << (double)min(A, B) * (sqrt(6) - sqrt(2)) << endl;

    return 0;
}
