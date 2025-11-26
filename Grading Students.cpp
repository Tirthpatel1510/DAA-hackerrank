#include <bits/stdc++.h>
using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    for (int &grade : grades) {
        if (grade >= 38) {
            int nextMultiple = ((grade / 5) + 1) * 5;
            if (nextMultiple - grade < 3) {
                grade = nextMultiple;
            }
        }
    }
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for (int i = 0; i < n; i++) {
        cin >> grades[i];
    }
    vector<int> result = gradingStudents(grades);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
    return 0;
}
