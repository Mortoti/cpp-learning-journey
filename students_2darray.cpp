#include <iostream>
using namespace std;

int main() {
    int students[3][4];

    for (int i = 0; i < 3; i++) {
        cout << "Enter marks for Student " << i + 1 << ":" << endl;
        for (int j = 0; j < 4; j++) {
            cout << "  Subject " << j + 1 << ": ";
            cin >> students[i][j];
        }
    }

    cout << "\nStudent Marks:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < 4; j++) {
            cout << students[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
