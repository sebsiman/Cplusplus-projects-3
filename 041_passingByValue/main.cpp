#include <iostream>

using namespace std;

void displayMenu();
void greetingMsg();
void thankYou();
void wrongChoiceMsg();
void fahrenheit2Celsius(int);
void celsius2Fahrenheit(int);

int main()
{
    int userChoice;
    int fahrenheit;
    int celsius;

    do
    {
        displayMenu();
        cin >> userChoice;

        switch(userChoice)
        {
        case 1:
            cout << "Enter temp in degrees F: ";
            cin >> fahrenheit;
            fahrenheit2Celsius(fahrenheit);
            break;
        case 2:
            cout << "Enter temp in degrees C: ";
            cin >> celsius;
            celsius2Fahrenheit(celsius);
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

void fahrenheit2Celsius(int tempF)
{
    double tempC;

    tempC = (tempF -32) * 5/9.0;

    cout << tempF << " degrees F = " << tempC << " degrees C." << endl;
}

void celsius2Fahrenheit(int tempC)
{
    double tempF;

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
