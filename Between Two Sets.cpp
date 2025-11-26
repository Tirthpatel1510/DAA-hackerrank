#include <bits/stdc++.h>
using namespace std;

// Function to compute gcd of two numbers
int gcd(int x, int y) {
    return y == 0 ? x : gcd(y, x % y);
}

// Function to compute lcm of two numbers
int lcm(int x, int y) {
    // avoid overflow: (x / gcd(x,y)) * y
    return (x / gcd(x, y)) * y;
}

int getTotalX(vector<int> &a, vector<int> &b) {
    // 1. Compute LCM of all elements in a
    int L = a[0];
    for (int i = 1; i < a.size(); i++) {
        L = lcm(L, a[i]);
    }
    
    // 2. Compute GCD of all elements in b
    int G = b[0];
    for (int i = 1; i < b.size(); i++) {
        G = gcd(G, b[i]);
    }
    
    // 3. Count how many multiples of L divide G
    int count = 0;
    for (int x = L; x <= G; x += L) {
        if (G % x == 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++) {
        cin >> b[j];
    }
    
    int result = getTotalX(a, b);
    cout << result << "\n";
    
    return 0;
}
