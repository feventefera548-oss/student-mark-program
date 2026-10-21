#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    char names[5][20];
    int marks[5][3];
    int total[5];
    double average[5];

    // Read student names and marks
    for (int i = 0; i < 5; i++) {
        cout << "Enter student " << i + 1 << " name: ";
        cin.getline(names[i], 20);

        total[i] = 0;

        for (int j = 0; j < 3; j++) {
            cout << "Enter mark " << j + 1 << ": ";
            cin >> marks[i][j];

            total[i] += marks[i][j];
        }

        average[i] = total[i] / 3.0;

        cin.ignore(1000, '\n');
    }

    // Find the top student
    int top = 0;

    for (int i = 1; i < 5; i++) {
        if (total[i] > total[top]) {
            top = i;
        }
    }

    // Print the table
    cout << "\n";
    cout << left
         << setw(20) << "Name"
         << setw(10) << "Mark 1"
         << setw(10) << "Mark 2"
         << setw(10) << "Mark 3"
         << setw(10) << "Total"
         << setw(10) << "Average" << endl;

    cout << string(70, '-') << endl;

    for (int i = 0; i < 5; i++) {
        cout << left
             << setw(20) << names[i]
             << setw(10) << marks[i][0]
             << setw(10) << marks[i][1]
             << setw(10) << marks[i][2]
             << setw(10) << total[i]
             << setw(10) << fixed
             << setprecision(2) << average[i] << endl;
    }

    // Display the top student
    cout << "\nTop student: " << names[top] << endl;
    cout << "Total marks: " << total[top] << endl;
    cout << "Average: " << fixed
         << setprecision(2) << average[top] << endl;
         return 0;

        }