// Write a program that compute the sum and average of two numbers
#include <iostream>
using namespace std;
int main(){
    double num1, num2, sum, average;
    cout << " Welcome To Mawuli Digital Services "<< endl;
    cout << " Please enter the first number: "<< endl;
    cin >> num1;
    cout<< " Please enter the second number: "<< endl;
    cin >> num2;
    sum = num1 + num2;
    average = sum / 2;
    cout << " The sum of "<< num1 << " and "<< num2 << " is "<< sum<< endl;
    cout << " The average of "<< num1 << " and "<< num2 << " is "<< average<< endl;


    return 0;
}
