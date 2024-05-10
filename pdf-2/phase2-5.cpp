#include <iostream>
#include <vector>

using namespace std;

// Function to generate grade based on marks
char generateGrade(int math, int phy, int chem) {
    if (math > 80 && phy > 75 && chem > 72)
        return 'A';
    else if (math >= 60 && phy >= 55 && chem >= 50)
        return 'B';
    else if (math >= 40 && phy >= 35 && chem >= 35)
        return 'C';
    else
        return 'D'; // Fail
}

int main() {
    int N; // Number of students
    cout << "Enter the number of students: ";
    cin >> N;

    vector<int> maths(N);
    vector<int> physics(N);
    vector<int> chemistry(N);

    // Input marks for each student and generate grades
    cout << "\nGrades:\n";
    for (int i = 0; i < N; ++i) {
        cout << "Enter marks for student " << i + 1 << " (Maths Physics Chemistry): ";
        cin >> maths[i] >> physics[i] >> chemistry[i];
        char grade = generateGrade(maths[i], physics[i], chemistry[i]);
        cout << "Student " << i + 1 << ": " << grade << endl;
    }

    return 0;
}

