// Name: Terrence Jay
// Class: Comp-Sci 201L-008L
// Program: Lab 1, Part 1
// Date:8/28/2024
// Description: Program asks user to make a guess, and tells them if their guess is too big, small, or correct, then loops.
#include <iostream>
using namespace std;

int main() {
    // There is a logic error in this program.
    // Correct this error, test your changes, and commit the changes
    int guess = 0, solution = 15;
    char answer = 'y';
    cout << "Would you like to play? ";
    cin >> answer;
    while (answer != 'n') {

        cout << "Enter your guess between 0 & 50: ";
        cin >> guess;
        if (guess > solution) {
            cout << "sorry - your guess is too big!\n";
        }
        else if (guess < solution) {
            cout << "sorry - your guess is too low!\n";
        }
        else {
            cout << "You guessed correctly!\n";
        }

        cout << "Guess again? ";
        cin >> answer;
        answer = toupper(answer);
    }
}
