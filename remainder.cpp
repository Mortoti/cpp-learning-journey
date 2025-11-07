#include <iostream>
#include <cmath>
// accept two numbers and output the product
// changed to this
// remender when num1 is divided by num2
using namespace std;
int main ()
{
    int num1, num2, remender ;
    cout << " Please enter the first number: " << endl;
    cin >> num1;
    cout << " Please enter the second number: " <<endl;
    cin >> num2;
    remender = num1 % num2;
    cout << " The remender of "<< num1 << " divided by " << num2 << " is "<< remender;
    return 0;

}
