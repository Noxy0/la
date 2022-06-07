#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    cout << "Dice Rolling Game\n\n";

    // min, max
    int min = 2;
    int max = 12;

    // Main game
    char playAgain;

    cout << "Roll the dices? (y,n): ";

    cin >> playAgain;

    while (playAgain == 'y')
    {
        cout << "The dices rolled: \n\n";

        int die1 = (rand() % min) + (rand() % max);
        int die2 = (rand() % min) + (rand() % max);
        
        cout << die1 << "\n";
        cout << die2;

        if (die1 + die2 == 7 || die1 + die2 == 11)
        {
            cout << "\nYou win!\n\n";
        }
        else
        {
            cout << "\nYou lost!\n\n";
        }

        cout << "Roll the dices again? (y,n): ";

        cin >> playAgain;
    }
}
