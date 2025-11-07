#include <iostream>
#include <fstream>
using namespace std;
int main (){
    string name;
    int age;
    cout << " What is your name "<< endl;
    getline ( cin, name);
    cout << " How old are you "<< endl;
    cin >> age;
    ofstream file ( "user_data.txt");
    file << " Your age is : "<< age<< endl;
    file << " Your name is "<< name << endl;
    file.close();
    ifstream filein ( "user_data.txt");
    string line;
    while ( getline(filein, line)){
        cout << line;
    }
    filein.close();
    return 0;
}
