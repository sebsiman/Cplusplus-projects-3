/*
Programmer: Sebastian Siman
Date: 10/2/18
Purpose: Prompt user for PIN, validate the input, and present user with a list of possible options.
*/
#include <iostream>

using namespace std;

int main()
{
    // variable initialization
    int atmPin;
    const int correctPin = 1111;
    char choiceSelected;
    int counter = 5; // counter initialized to give users 5 attempts at inputting the PIN.

    // ask user for PIN
    cout << "Welcome. Thank you for visiting COP 1334 Bank. What is your pin?" << endl;
    cin >> atmPin;

    // first step in validating user input by filtering out any non number inputs. gives the user a limited number of attempts to correctly input the PIN
    while(cin.fail())
    {
        counter--;
        cout << "\nIncorrect data type. Please enter number values." << endl;
        cout << "Attempts remaining: " << counter << endl;
        cin.clear();
        cin.sync();
        cout << "\nWhat is your pin?" << endl;
        cin >> atmPin;
        if(counter == 1) // initially set == 0 but would give 6 attempts, thus changed to 1.
        {
             cout << "You have no remaining attempts. Please contact customer service for help." << endl;
             return 0;
        }
    }

    // second step in validating user input by testing for correct PIN. also gives the user a limited number of attempts.
    while(atmPin != correctPin)
    {
        while(cin.fail())
        {
            /*
            When I was testing the program to check for bugs or flawed interactions I noticed if I input
            an incorrect PIN and then an incorrect data type, the program would bug and no longer
            accept new inputs, as well as automatically bringing the counter down to 0, ending the program.
            By copying and pasting the first validation again, it fixed the interaction.
            //*/
            counter--;
            cout << "\nIncorrect data type. Please enter number values." << endl;
            cout << "Attempts remaining: " << counter << endl;
            cin.clear();
            cin.sync();
            cout << "\nWhat is your pin?" << endl;
            cin >> atmPin;
            if(counter == 1)
            {
                 cout << "You have no remaining attempts. Please contact customer service for help." << endl;
                 return 0;
            }
        }
        counter--;
        cout << "\nIncorrect Pin Entered. Please re-enter your pin." << endl;
        cout << "Attempts remaining: " << counter << "\n" << endl;
        cin >> atmPin;
        if(counter == 1)
        {
             cout << "You have no remaining attempts. Please contact customer service for help." << endl;
             return 0;
        }
    }

    // displays the menu choices to the user an prompts user input
    cout << "\nWelcome to the COP 1334 ATM." << endl;
    cout << "Please select from the following choices:" << endl;
    cout << "A. \tDeposit" << endl;
    cout << "B. \tWithdraw" << endl;
    cout << "C. \tCheck Balance" << endl;
    cout << "D. \tExit\n" << endl;
    cin >> choiceSelected;

    switch(choiceSelected) // switch to select from the different atm operations.
    {
    case 'A':
    case 'a':
        cout << "\nYou have selected Deposit." << endl;
        break;
    case 'B':
    case 'b':
        cout << "\nYou have selected Withdraw." << endl;
        break;
    case 'C':
    case 'c':
        cout << "\nYou have selected Check Balance." << endl;
        break;
    case 'D':
    case 'd':
        cout << "\nThank you for using the COP 1334 ATM. Have a nice day!" << endl;
        break;
    default:
        cout << "\nPlease enter a valid option.";
    }

    return 0;
}
