#include <iostream>
using namespace std;
int main()
{
    // ask user to enter three numbers
    // the sum of the two numbers and the average
    double num1, num2, num3, sum, average ;
    cout << "Enter the first number: "<< endl;
    cin >> num1;
    cout << " Enter the second number: " << endl;
    cin >> num2;
    cout << " Enter the third and last number: "<< endl;
    cin >> num3;
    sum = num1 + num2 + num3;
    average = ( num1 + num2 + num3)/ 3;
    cout << " The sum is "<< sum << endl;
    cout << "The average is " << average;
    return 0;
}
