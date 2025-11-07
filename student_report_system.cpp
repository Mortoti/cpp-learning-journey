#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int num;
    cout << "How many students are we working with? " << endl;
    cin >> num;
    cin.ignore(); // Clear newline left by cin

    string names[num], grades[num];
    int english[num], science[num], social[num];
    double average[num];

    for (int i = 0; i < num; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        getline(cin, names[i]);

        cout << "Enter the English score for student " << i + 1 << ": ";
        cin >> english[i];
        cout << "Enter the Science score for student " << i + 1 << ": ";
        cin >> science[i];
        cout << "Enter the Social score for student " << i + 1 << ": ";
        cin >> social[i];
        cin.ignore(); // Clear newline before next getline
    }

    for (int i = 0; i < num; i++) {
        average[i] = (english[i] + science[i] + social[i]) / 3.0; // use double division

        if (average[i] < 0) grades[i] = "NA";
        else if (average[i] < 40) grades[i] = "F";
        else if (average[i] < 50) grades[i] = "E";
        else if (average[i] < 60) grades[i] = "D";
        else if (average[i] < 70) grades[i] = "C";
        else if (average[i] < 80) grades[i] = "B";
        else if (average[i] <= 100) grades[i] = "A";
        else grades[i] = "NAN";
    }

    ofstream file("report.txt");
    for (int i = 0; i < num; i++) {
        file << names[i] << endl;
        file << "Average: " << average[i] << endl;
        file << "Grade: " << grades[i] << endl << endl;
    }
    file.close();

    ifstream fileOut("report.txt");
    string line;
    while (getline(fileOut, line)) {
        cout << line << endl;
    }

    return 0;
}
