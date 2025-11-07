#include <iostream>
using namespace std;
// write a program that accepts name and age.
// the program should output a greeting message with the users name and tell the user he will be ... years in the coming year
int main ()
{
    cout << "Welcome To NOLAP Technology" << endl ;
    string name;
    int age, new_age;
    cout << "Please what is your name? " << endl;
    getline(cin, name);
    cout << "How old are you? " << endl;
    cin >> age;
    new_age = age + 1;
    cout << "Hello "<< name << " NOLAP Technology is Happy to Have you on board. We are also excited that you will be "<< new_age <<" years in the coming year";
    return 0;
}
