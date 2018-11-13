/*
Programmer: Sebastian Siman
Date: 10/16/18
Purpose: Prompt the user with a game of rock paper scissors and tally the points for each win by the user or computer & allow the user to restart the game if desired.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main()
{

    int userChoice;
    int computerChoice;
    char yesOrNo; // variable to end or restart the do while loop with yes or no
    unsigned seed = time(0);
    srand(seed);

    cout << "Welcome to the COP 1334 Rock, Paper, Scissors game! \nCan you beat the computer?\n\n" << endl;

    do{
        int playerCounter = 0; // initialized inside the do while loop to reset if user opts to restart game
        int computerCounter = 0; // same as playerCounter
        bool winnerReached = false;
        computerChoice = 1 + rand() % 3; // random number generator for 1-3
        //cout << computerChoice << endl; // printed for debug and testing

        cout << "Game Menu" << endl;
        cout << "---------" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "Enter your choice: ";
        cin >> userChoice;

        while(cin.fail()) // input validation
        {
            cout << "Incorrect data type entered. Please select a number between 1 and 3." << endl;
            cin.clear();
            cin.sync();
            cin >> userChoice;
        }

        while(userChoice < 1 || userChoice > 3)
        {
            cout << "Please select a valid option." << endl;
            cin >> userChoice;
        }

        while(winnerReached == false) // only runs until there is a winner decided
        {
            system("CLS"); // the repeated printing of the game menu was causing a lot of clutter, this minimized text printed
            switch(computerChoice)
            {
            case 1: // comp chose rock
                if(userChoice == 1) // player chose rock
                {
                    cout << "You selected: Rock" << endl;
                    cout << "The computer selected: Rock" << endl;
                    cout << "You tied." << endl;
                }
                else if(userChoice == 2) // player chose paper
                {
                    cout << "You selected: Paper" << endl;
                    cout << "The computer selected: Rock" << endl;
                    cout << "Paper wraps rock." << endl;
                    cout << "You win!" << endl;
                    playerCounter++;
                }

                else // player chose scissors
                {
                    cout << "You selected: Scissors" << endl;
                    cout << "The computer selected: Rock" << endl;
                    cout << "Rock smashes the Scissors." << endl;
                    cout << "You lost." << endl;
                    computerCounter++;
                }
                break;
            case 2: // computer chose paper
                if(userChoice == 1) // player chose rock
                {
                    cout << "You selected: Rock" << endl;
                    cout << "The computer selected: Paper" << endl;
                    cout << "Paper wraps rock." << endl;
                    cout << "You lost." << endl;
                    computerCounter++;
                }
                else if(userChoice == 2) //  player chose paper
                {
                    cout << "You selected: Paper" << endl;
                    cout << "The computer selected: Paper" << endl;
                    cout << "You tied." << endl;
                }
                else // player chose scissors
                {
                    cout << "You selected: Scissors" << endl;
                    cout << "The computer selected: Paper" << endl;
                    cout << "Scissors cut the paper." << endl;
                    cout << "You win!" << endl;
                    playerCounter++;
                }
                break;
            default: // computer chose scissors
                if(userChoice == 1) // player chose rock
                {
                    cout << "You selected: Rock" << endl;
                    cout << "The computer selected: Scissors" << endl;
                    cout << "Rock smashes the scissors." << endl;
                    cout << "You win!" << endl;
                    playerCounter++;
                }
                else if(userChoice == 2) // player chose paper
                {
                    cout << "You selected: Paper" << endl;
                    cout << "The computer selected: Scissors" << endl;
                    cout << "Scissors cut the paper." << endl;
                    cout << "You lost." << endl;
                    computerCounter++;
                }
                else // player chose scissors
                {
                    cout << "You selected: Scissors" << endl;
                    cout << "The computer selected: Scissors" << endl;
                    cout << "You tied." << endl;
                }
            }

            cout << "-------------------------" << endl;
            cout << "USER\t :\t COMPUTER" << endl;
            cout << playerCounter << "\t :\t " << computerCounter << endl;
            cout << "-------------------------" << endl;

            if(playerCounter == 5)
            {
                cout << "Congratulations! You won the set." << endl;
                winnerReached = true;
            }
            else if(computerCounter ==  5)
            {
                cout << "Oh no! You couldn't beat the computer. Better luck next time!" << endl;
                winnerReached = true;
            }

            if(winnerReached == false) // prevents it from continuing to print after a winner has been reached
            {
                computerChoice = 1 + rand() % 3; // randomize computer choice again for subsequent games

                cout << "\nGame Menu" << endl; // game menu is here to print again after the screen clears
                cout << "---------" << endl;
                cout << "1. Rock" << endl;
                cout << "2. Paper" << endl;
                cout << "3. Scissors" << endl;
                cout << "Enter your choice: ";
                cin >> userChoice;

                while(cin.fail()) // defensive coding
                {
                    cout << "Incorrect data type entered. Please select a number between 1 and 3." << endl;
                    cin.clear();
                    cin.sync();
                    cin >> userChoice;
                }

                while(userChoice < 1 || userChoice > 3)
                {
                    cout << "Please select a valid option." << endl;
                    cin >> userChoice;
                }
            }
        }

        cout << "Would you like to play again?" << endl;
        cout << "Press Y or y to continue. Press any other key to exit." << endl;
        cin >> yesOrNo;

        switch(yesOrNo) // gives the user the option to exit the do while loop
            {
            case 'Y':
            case 'y':
                cout << "Thank you for choosing to play again. Restarting now." << endl;
                break;
            default:
                cout << "Thank you for playing. Goodbye." << endl;
            }
    }while(yesOrNo == 'Y' || yesOrNo == 'y');


    return 0;
}
