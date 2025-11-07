#include <iostream>
using namespace std;

int main() {
    cout << "MY GUESSING GAME" << endl;

    const int num = 7;
    int num1;

    cout << "Try guessing my number: ";
    cin >> num1;

    if (num1 == num) {
        cout << "Congratulations. You guessed the number!" << endl;
    } 
    else {
        if (num1 < num) {
            cout << "Too low, try again." << endl;
        } 
        else {
            cout << "Too high, try again." << endl;
        }

        while (num1 != num) {
            cout << "Enter another number: ";
            cin >> num1;

            if (num1 == num) {
                cout << "Congratulations! You guessed it!" << endl;
            } 
            else if (num1 < num) {
                cout << "Too low, try again." << endl;
            } 
            else {
                cout << "Too high, try again." << endl;
            }
        }
    }

    int names[5] = {1, 2, 3, 4, 5};
    cout << "Example array element: " << names[2] << endl;

    return 0;
}
