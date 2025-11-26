#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, t;
    cin >> s >> t;  // house range [s, t]

    int a, b;
    cin >> a >> b;  // positions of apple tree and orange tree

    int m, n;
    cin >> m >> n;  // number of apples and oranges

    vector<int> apples(m), oranges(n);

    for (int i = 0; i < m; i++) {
        cin >> apples[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> oranges[i];
    }

    int appleCount = 0, orangeCount = 0;

    // Count apples on house
    for (int d : apples) {
        int pos = a + d;
        if (pos >= s && pos <= t) {
            appleCount++;
        }
    }

    // Count oranges on house
    for (int d : oranges) {
        int pos = b + d;
        if (pos >= s && pos <= t) {
            orangeCount++;
        }
    }

    cout << appleCount << "\n";
    cout << orangeCount << "\n";

    return 0;
}
