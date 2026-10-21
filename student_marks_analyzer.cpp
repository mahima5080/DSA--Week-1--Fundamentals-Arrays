#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "==========================================\n";
    cout << "         STUDENT MARKS ANALYZER           \n";
    cout << "==========================================\n";
    cout << "Enter number of students (N): ";
    cin >> n;

    if (n <= 0) {
        cout << "❌ Invalid number of students!" << endl;
        return 1;
    }

    double marks[n];
    double sum = 0.0;

    cout << "Enter marks of " << n << " students:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << (i + 1) << " marks: ";
        cin >> marks[i];
        sum += marks[i];
    }

    // Sort array in descending order
    sort(marks, marks + n, greater<double>());

    double average = sum / n;

    cout << "\n------------------------------------------\n";
    cout << "            PERFORMANCE SUMMARY           \n";
    cout << "------------------------------------------\n";
    cout << fixed << setprecision(2);
    cout << "📊 Average Score: " << average << endl;

    cout << "\n🏆 Top Scores:\n";
    int topCount = min(n, 3);
    for (int i = 0; i < topCount; i++) {
        cout << "   Rank " << (i + 1) << ": " << marks[i] << endl;
    }
    cout << "==========================================\n";

    return 0;
}
