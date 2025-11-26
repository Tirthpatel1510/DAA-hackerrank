#include <bits/stdc++.h>
using namespace std;

int birthday(vector<int>& s, int d, int m) {
    int count = 0;
    int n = s.size();
    // iterate through each possible segment start
    for (int i = 0; i + m <= n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += s[i + j];
        }
        if (sum == d) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int d, m;
    cin >> d >> m;
    int result = birthday(s, d, m);
    cout << result << "\n";
    return 0;
}
