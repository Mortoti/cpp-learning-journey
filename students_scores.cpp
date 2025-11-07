// write a program that accepts the names of 5 students and also their scores and print both

#include <iostream>
#include <array>
using namespace std;

string student [5];
int scores [5];

int main() {

    for (int i=0; i<5; i++) {
        cout << "Enter the name of student "<< i+1 <<endl;
        getline (cin,student[i]);

        cout << "Enter student score " << i+1 <<endl;
        cin>> scores[i];
        cin.ignore();
    }

for (int i=0; i<5; i++) {

    cout << student [i] <<" Scored " <<" " <<scores[i] <<"%"<<endl;

}



}

