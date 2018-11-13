#include <iostream>

using namespace std;



// function prototypes
void thankYou();
void greetingMsg();
void displayMenu();
void wrongChoiceMsg();
double celsius2Fahrenheit(int );
void fahren2Celsius(int , double &);
void displayResults(int , double , char) ;

int main()
{
    int userChoice;
    int fahren;   // temp in Fahrenheit
    int cels;     // temp in Celsius
    char convType; // 'F' (if F2C) or 'C' (C2F)
    double result;  // to store result of function returns

    do
    {
       displayMenu();
       cin >> userChoice;

       switch(userChoice)
       {
       case 1:
            cout << "Enter temp in degrees F: ";
            cin >> fahren;
            fahren2Celsius(fahren, result);
            displayResults(fahren, result, 'F');
            break;
       case 2:
            cout << "Enter temp in degrees C: ";
            cin >> cels;
            // display (call the function inline )
            displayResults(cels, celsius2Fahrenheit(cels), 'C');
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

void displayResults(int tempCF, double result, char convType)
{
    if (convType == 'F')
    {
       cout << tempCF << " degrees F is "
                 << result
                 << " degrees C"
                 << endl;
    }
    else if (convType == 'C')
    {
        cout << tempCF << " degrees C is "
                 << result
                 << " degrees F"
                 << endl;
    }
    else
    {
        cout << "Error. Wrong Conversion Type" << endl;
    }


}

void fahren2Celsius(int tempF, double &tempC)
{
    //int tempF;
    // double  tempC;   // temp in degrees C

    // formula
    tempC = (tempF - 32) * 5/9.0;

    // return tempC;

}

double celsius2Fahrenheit(int tempC)
{
    double tempF;   // temp in degrees F

    // formula for calculation
    tempF = 9.0/5 * tempC + 32;

    return tempF;
    /* We had this before when the function was void
    return;  // because of the "return" the following statements
             // are "unreachable"
    // display the result
    cout << tempC << " degrees C is "
         << tempF << " degrees F"
         << endl;
    */
}

void wrongChoiceMsg()
{
    cout << "Invalid choice" << endl;
    cout << "Please enter 1, 2 or 3 only" << endl;
    cout << "Your choice: ";
}

void thankYou()
{
    cout << "Thank you for using COP 1334 ConversionApp" << endl;
    cout << "Have a nice day" << endl;
}
void greetingMsg()
{
    cout << "Welcome to COP 1334 ConversionApp" << endl;
    cout << "Please choose one of the following:" << endl;
}

void displayMenu()
{
    greetingMsg();
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "3. Exit" << endl;
    cout << "Your choice: ";
}
