#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int userNumber;
    // declare variables
    int computerNumber;
    const int MAX_NUM_OF_TRIES = 5;
    int attemptsRemaining;
    char userChoice;
    do
    {

        int counter = 0;


        // computer picks a number
        unsigned seed = time(0);  // current time
        srand(seed);

        computerNumber = 1 + rand() % 100; // 1 and 100

        //cout << "DBG: computer number: " << computerNumber << endl;

        // start the game
        cout << "\nI am thinking of a number in 1..100 range " << endl;
        cout << "Can you guess it: ";

        while (!(cin >> userNumber))
        {
            cout << "Wrong data type. Please enter numbers only!" << endl;
            cin.clear();
            cin.sync();
        }

        /*while (userNumber < 1 || userNumber > 100)
        {

            cout << "Incorrect number entered. Please enter a number between 1 and 100." << endl;
            cin >> userNumber;
        }*/

        // this means we have a number
        while (userNumber != computerNumber)
        {

            counter++;
            if (userNumber < computerNumber)
                cout << "TOO LOW" << endl;
            else if (userNumber > computerNumber)
                cout << "TOO HIGH" << endl;
            attemptsRemaining = 5 - counter;
            cout << "You have " << attemptsRemaining << " attempts remaining." << endl;
            if (counter == MAX_NUM_OF_TRIES)
            {
                cout << "You have no remaining tries. Do you want to try again?" << endl;
                break;
            }
            cout << "\nGuess again: ";
            cin >> userNumber;

        }

        // they guessed it correctly
        if (userNumber == computerNumber)
        {
            cout << "Congrats, you guessed correctly" << endl;
            cout << computerNumber << " was my number " << endl;
            cout << "It took you " << counter << " attempts to guess correctly." << endl;

        }
        cout << "\nDo you want to play again?" << endl;
        cin >> userChoice;
        switch(userChoice)
        {
        case 'Y':
        case 'y':
        case 'N':
        case 'n':
        }



    }while(userChoice != 'n' && userChoice != 'N');


    return 0;
}
