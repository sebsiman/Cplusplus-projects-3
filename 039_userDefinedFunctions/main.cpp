#include <iostream>

using namespace std;

void myFunction();
void greetingMessage();
void introduction();

int main()
{
    greetingMessage();
    introduction();
    myFunction();

    return 0;
}

void myFunction()
{
    cout << "I am a computer science major." << endl;
    cout << "I plan to graduate in December." << endl;

    // no return statement because it is void
}

void greetingMessage()
{
    cout << "Hello COP 1334" << endl;
}

void introduction()
{
    cout << "My name is Sebastian Siman." << endl;
    cout << "I live in Miami-Dade County." << endl;
}
