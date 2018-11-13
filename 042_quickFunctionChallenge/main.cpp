#include <iostream>

using namespace std;

void userPrompt();
void displayUserInfo(string, string, string, string, string);


int main()
{
    string name, address, city, state, zip;

    userPrompt();

    cout << "Name: ";
    getline(cin, name);

    cout << "Address: ";
    getline(cin, address);

    cout << "City: ";
    getline(cin, city);

    cout << "State: ";
    getline(cin, state);

    cout << "Zip Code: ";
    getline(cin, zip);

    displayUserInfo(name, address, city, state, zip);

    return 0;
}

void userPrompt()
{
    cout << "Welcome! What is your name, address, state, and city?" << endl;
}

void displayUserInfo(string name, string address, string city, string state, string zip)
{
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "City: " << city << endl;
    cout << "State: " << state << endl;
    cout << "Zip Code: " << zip << endl;
}
