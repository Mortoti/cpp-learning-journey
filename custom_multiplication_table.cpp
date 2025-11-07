// i am building the multiplication table from 1 to infinity
#include <iostream>
using namespace std;
int main ()
{
    int num;
    cout << " Custom Multiplication Table From NOLAP Technology"<< endl;
    cout << "Enter a number to generate its multiplication table: "<< endl;
    cin >> num;
    for( int i = 1; i <=24; i++){
        cout << num << " * "<< i << " = " << num * i << endl;
    }


    return 0;
}
