// Final C++ File Handling Challenge
//Create a student records system that:
// Asks the user to enter multiple student names and scores
// Saves them in a file (students.txt)
//Reads the file and displays all student records
#include <iostream>
#include <fstream>
using namespace std;
int main (){

    int num;
    cout << " Enter the total number of students: "<< endl;
    cin >> num;
    cin.ignore();  
    int scores[num];
    string names[num];
    for ( int i = 0; i< num; i++){
        cout << " The name of student number "<< i+1<< endl;


        getline (cin, names[i]);
        cout << " The score for student number "<< i + 1<< endl;
        cin>> scores[i];
    }
    ofstream fileIn ("students.txt");
    for ( int i = 0; i < num ; i++){
        fileIn <<  " The name of student number "<< i+1<< " is "<< names[i]<< endl;
        fileIn << " The score for student number "<< i + 1<<" is "<< scores[i]<< endl;
    }
    fileIn.close();
    ifstream fileOut ( "students.txt");
    string line;

    while ( getline(fileOut, line)){
        cout << line<< endl;
    }

    return 0;
}
