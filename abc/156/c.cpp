#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int coordinates[N];
    int tmp;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        sum += tmp;
        coordinates[i] = tmp;
    }
    
    float mean = (float)sum / (float)N;
    int flooredMean = floor(mean);
    int ceiledMean = ceil(mean);

    int staminaRequiredForFlooredMean = 0;
    int staminaRequiredForCeiledMean = 0;

    for (auto c : coordinates) {
        staminaRequiredForFlooredMean += (int)pow(c - flooredMean, 2);
        staminaRequiredForCeiledMean += (int)pow(c - ceiledMean, 2);
    }

    int result = min(staminaRequiredForFlooredMean, staminaRequiredForCeiledMean);

    cout << result << endl;

    return 0;
}
