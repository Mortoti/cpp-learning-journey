#include <iostream>
#include <ctime>
using namespace std;

int main() {
    cout << "NOLAP Guessing Game" << endl;

    srand(time(0));
    int num = rand() % 10 + 1; // random number between 1 and 10
    int guess;
    int trials = 3; // total attempts
    int play = 1;

    cout << "What number are you guessing (1-10)? ";
    cin >> guess;

    while (guess >= 1 && guess <= 10) {
        if (guess == num) {
            cout << "Congratulations! You guessed correctly on your first attempt. You are a genius!" << endl;
            break;
        } else {
            cout << "Your guess was incorrect." << endl;

            for (int i = 2; i <= trials; i++) {
                int remaining = trials - i + 1;
                cout << "Please guess again: ";
                cin >> guess;

                if (guess == num) {
                    cout << "Congratulations! You guessed correctly." << endl;
                    cout << "You played the game " << play << " time(s)." << endl;
                    break;
                } else if (remaining == 1 && guess != num) {
                    cout << "You have exhausted all your trials." << endl;
                    cout << "The correct number was " << num << "." << endl;
                    play++;
                    break;
                } else {
                    cout << "Incorrect. Try again." << endl;
                }
            }
            break;
        }
    }

    return 0;
}
