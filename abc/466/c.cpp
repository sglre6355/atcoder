#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    int answer = 0;
    int left = 1;

    for (int right = 2; right <= N; ++right) {
        while (left < right) {
            cout << "? " << left << ' ' << right << endl;

            string response;
            cin >> response;

            if (response == "Yes") {
                break;
            }

            ++left;
        }

        answer += right - left;
    }

    cout << "! " << answer << endl;
}
