// Final C++ Project: Student Report System
//✅ What This Program Will Do:
//1️⃣ Ask the user how many students they want to enter.
//2️⃣ Get each student's name, scores for 3 subjects, and calculate the average score.
//3️⃣ Assign a grade (A, B, C, D, or F) based on the average.
//4️⃣ Save the data to a file (report.txt).
//5️⃣ Read the file and display the student report.
#include <iostream>
#include <fstream>
using namespace std;
int main (){

    int num;
    cout << " How many students are we working with? "<< endl;
    cin>>num;
    int scores[num];
    string grades[num], names[num];
    int english[num], science[num], social[num], total[num];
    for (int i = 0; i < num; i++){
        cout << " Enter the name of student "<< i + 1<< endl;
        getline (cin, names[i]);
        cout << " Enter the english score for student number "<< i+1<<endl;
        cin>> english[i];
        cout << " Enter the science score for student number "<< i+1<<endl;
        cin>> science[i];
        cout << " Enter the social score for student number "<< i+1<<endl;
        cin>> social[i];
    }
    for ( int i = 0; i < num ; i ++){
        total[i]= (english[i]+ social[i]+ science[i] )/ 3;
    }
    for ( int i = 0; i< num; i++){
        if ( total[i]< 0){
            grades[i]= "NA";}
        else if ( total[i]< 40){
            grades[i]= "F";}
        else if ( total[i]< 50){
            grades[i]= "E";}
        else if ( total[i]< 60){
            grades[i]= "D";}
        else if ( total[i]< 70 ){
            grades[i]= "C";}
        else if ( total[i]< 80){
            grades[i]= "B";}
        else if ( total[i]<= 100){
            grades[i]= "A";}
        else
        {
            grades[i]= "NAN";
        }

    }
    ofstream file ( "report.txt");
    for ( int i = 0; i < num; i++){
        file<< names[i]<< endl;
        file<< grades[i]<< endl;
        file<<total[i]<<endl;
    }
    file.close();
    ifstream fileOut ( "report.txt");
    string line;
    while ( getline(fileOut, line)){
        cout << line;
    }

    return 0;
}
