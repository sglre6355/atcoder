#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long n = a / b + (a % b != 0);

    cout << n << endl;

    return 0;
}
