#include <bits/stdc++.h>
using namespace std;

unsigned long long f(unsigned long long a, unsigned long long b)
{
    if (b == 0) return -1;
    return a / b + f(b, a % b);
}

int main()
{
    unsigned long long A, B, a, b;
    cin >> A >> B;
    
    a = max(A, B);
    b = min(A, B);

    unsigned long long i = f(a, b);

    cout << i << endl;

    return 0;
}
