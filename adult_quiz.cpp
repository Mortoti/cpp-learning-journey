#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void question1 (){

    cout << " Who is the best female porn actress of all time? "<< endl;
}
void question2 (){
    cout << " What is best free porn site currently? "<<endl;

}
void question3 (){
    cout << " What is the name of the popular muslim pornstar? "<<endl;

}
void question4 (){
    cout<<" Who is the most famous male pornstar of all time?"<< endl;

}
int main(){
     string questions[4];
     string answers[] = {"Kira Noir",  "Pornhub", "Mia Khalifa", "Johnny Sins"};
     int check = 1;
     int score = 0;
     while ( check == 1){

        question1();
        getline(cin, questions[0]);
        question2 ();
        getline(cin, questions[1]);
        question3();
        getline(cin, questions[2]);
        question4 ();
        getline(cin, questions[3]);


    for ( int i = 0; i <= 3; i++){
            transform(questions[i].begin(), questions[i].end(), questions[i].begin(), ::tolower);
            transform(answers[i].begin(), answers[i].end(), answers[i].begin(), ::tolower);
        if ( questions[i]== answers[i]){
            cout << " Congratulations for nailing  question "<< i + 1<< endl;
            score = score + 1;
            cout << endl;
        }
        else {
            cout << " The answer you gave for question "<< i + 1 << " is wrong"<< endl;
            cout << endl;
            cout<< " the correct answer is: " << answers[i]<< endl;
            cout << endl;
        }
    }
        cout << " Your score is "<< score << " / 4"<< endl;

        cout << " Do you want to continue? If yes, type 1 else type 0"<< endl;
        cin>> check;
        score = 0;
        cin.ignore();

     }





    return 0;

}
