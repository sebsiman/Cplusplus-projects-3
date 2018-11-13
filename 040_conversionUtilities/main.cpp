#include <iostream>

using namespace std;

void displayMenu();
void greetingMsg();
void thankYou();
void wrongChoiceMsg();
void fahrenheit2Celsius();
void celsius2Fahrenheit();

int main()
{
    int userChoice;

    do
    {
        displayMenu();
        cin >> userChoice;

        switch(userChoice)
        {
        case 1:
            fahrenheit2Celsius();
            break;
        case 2:
            celsius2Fahrenheit();
            break;
        case 3:
            thankYou();
            break;
        default:
            wrongChoiceMsg();
        }
    }while (userChoice != 3);

    return 0;
}

void fahrenheit2Celsius()
{
    double tempC;
    int tempF;

    cout << "Enter temp in degrees F: ";
    cin >> tempF;

    tempC = (tempF -32) * 5/9.0;

    cout << tempF << " degrees F = " << tempC << " degrees C." << endl;
}

void celsius2Fahrenheit()
{
    int tempC;
    double tempF;

    cout << "Enter temp in degrees C: ";
    cin >> tempC;

    tempF = 9.0/5 * tempC + 32;

    cout << tempC << " degrees C = " << tempF << " degrees F." << endl;
}

void displayMenu()
{
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "3. Exit" << endl;
    cout << "Your choice: ";
}

void greetingMsg()
{
    cout << "Welcome to the COP 1334 ConversionApp" << endl;
    cout << "Please choose one of the following:" << endl;
}

void thankYou()
{
    cout << "Thank you for using the COP 1334 ConversionApp." << endl;
}

void wrongChoiceMsg()
{
    cout << "Invalid choice" << endl;
    cout << "Please enter 1, 2 or 3 only" << endl;
    cout << "Your choice: ";
}
