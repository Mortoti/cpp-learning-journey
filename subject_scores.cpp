#include <iostream>
using namespace std;

int main() {
    string sub1, sub2, sub3, sub4, sub5, sub6, sub7, sub8;
    double score1, score2, score3, score4, score5, score6, score7, score8;
    string grade1, grade2, grade3, grade4, grade5, grade6, grade7, grade8;

    cout << "Enter the name of 1st subject: ";
    getline(cin, sub1);
    cout << "Enter the name of 2nd subject: ";
    getline(cin, sub2);
    cout << "Enter the name of 3rd subject: ";
    getline(cin, sub3);
    cout << "Enter the name of 4th subject: ";
    getline(cin, sub4);
    cout << "Enter the name of 5th subject: ";
    getline(cin, sub5);
    cout << "Enter the name of 6th subject: ";
    getline(cin, sub6);
    cout << "Enter the name of 7th subject: ";
    getline(cin, sub7);
    cout << "Enter the name of 8th subject: ";
    getline(cin, sub8);

    cout << endl << "Enter the scores for each subject:" << endl;
    cout << sub1 << ": "; cin >> score1;
    cout << sub2 << ": "; cin >> score2;
    cout << sub3 << ": "; cin >> score3;
    cout << sub4 << ": "; cin >> score4;
    cout << sub5 << ": "; cin >> score5;
    cout << sub6 << ": "; cin >> score6;
    cout << sub7 << ": "; cin >> score7;
    cout << sub8 << ": "; cin >> score8;

    // Grade calculation function-like structure for repeated logic
    auto calcGrade = [](double score) -> string {
        if (score < 0 || score > 100) return "N";
        else if (score < 40) return "F";
        else if (score < 50) return "E";
        else if (score < 60) return "D";
        else if (score < 70) return "C";
        else if (score < 80) return "B";
        else return "A";
    };

    grade1 = calcGrade(score1);
    grade2 = calcGrade(score2);
    grade3 = calcGrade(score3);
    grade4 = calcGrade(score4);
    grade5 = calcGrade(score5);
    grade6 = calcGrade(score6);
    grade7 = calcGrade(score7);
    grade8 = calcGrade(score8);

    double total = score1 + score2 + score3 + score4 + score5 + score6 + score7 + score8;

    cout << endl << "RESULTS TIME!!!!!!!" << endl << endl;
    cout << sub1 << " - " << score1 << " - " << grade1 << endl;
    cout << sub2 << " - " << score2 << " - " << grade2 << endl;
    cout << sub3 << " - " << score3 << " - " << grade3 << endl;
    cout << sub4 << " - " << score4 << " - " << grade4 << endl;
    cout << sub5 << " - " << score5 << " - " << grade5 << endl;
    cout << sub6 << " - " << score6 << " - " << grade6 << endl;
    cout << sub7 << " - " << score7 << " - " << grade7 << endl;
    cout << sub8 << " - " << score8 << " - " << grade8 << endl;
    cout << endl << "Total Score: " << total << endl;

    return 0;
}
