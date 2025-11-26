#include <bits/stdc++.h>
using namespace std;

vector<int> breakingRecords(const vector<int>& scores) {
    int maxCount = 0;
    int minCount = 0;
    if (scores.empty()) {
        return {0, 0};
    }
    int currentMax = scores[0];
    int currentMin = scores[0];
    
    for (int i = 1; i < scores.size(); i++) {
        if (scores[i] > currentMax) {
            currentMax = scores[i];
            maxCount++;
        }
        else if (scores[i] < currentMin) {
            currentMin = scores[i];
            minCount++;
        }
    }
    return {maxCount, minCount};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    vector<int> result = breakingRecords(scores);
    cout << result[0] << " " << result[1] << "\n";

    return 0;
}
