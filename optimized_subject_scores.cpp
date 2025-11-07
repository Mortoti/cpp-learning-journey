// i just fucked up writing 286 lines of code for no reason
// i'm coming to optimize my foolish code
#include <iostream>
using namespace std;
int main ()
{
    string grade[8];
    string subject[8];
    double score[8];
    for ( int i = 0; i < 8; i++){
        cout << " Enter the name of subject "<< i+ 1 << " : "<< endl;
        getline ( cin, subject[i]);

    }
    for ( int i = 0; i < 8 ; i++){
        cout << "Enter your score for " << subject[i]<< " : "<< endl;
        cin>> score[i];


    }
    for ( int i = 0; i < 8 ; i++ ){
        if ( score[i]< 0){
            grade[i]= "NA";

        }
        else if ( score[i]< 40){
            grade[i]= "F9";
        }
        else if ( score[i]< 45){
            grade[i]= "E8";
        }
        else if ( score[i]< 50){
            grade[i]= "D7";

        }
        else if ( score[i]< 55){
            grade[i]= "C6";
        }
        else if ( score[i]< 60){
            grade[i]= "C5";

        }
        else if ( score[i]< 75){
            grade[i]= "C4";
        }
        else if ( score[i]< 80){
            grade[i]= "B3";

        }
        else if ( score[i]< 85){
            grade[i]= "B2";
        }
        else if ( score[i]<= 100){
            grade[i]= "A1";

        }
        else {
            grade[i]= "NA";
        }
    }
    for ( int i = 0; i < 8; i++){
        cout << subject[i]<< " - "<< score[i] << " - "<< grade[i]<< endl;
    }
    return 0;

}
