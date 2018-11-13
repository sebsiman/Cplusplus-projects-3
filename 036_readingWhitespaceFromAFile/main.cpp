#include <iostream>
#include <fstream> // needed to work with files

using namespace std;

int main()
{
    ifstream iFile; // input file handle
    ofstream oFile; // output file handle
    // string aStudent; // holds student name
    string aCity; // holds city name

    oFile.open("Municipalities.txt");

    oFile << "Coral Gables" << endl;
    oFile << "Coral Springs" << endl;
    oFile << "Miami Springs" << endl;
    oFile << "Miami Lakes" << endl;
    oFile << "Miami Beach" << endl;
    oFile << "Fort Lauderdale" << endl;

    oFile.close();

    iFile.open("Municipalities.txt");

    if(!iFile) // defensive programming
    {
        cout << "Trouble locating the file." << endl;
        cout << "Exiting." << endl;
    }
    else
    {
        // file opened correctly
        // process the file

        // while(iFile >> aStudent) // whitespace problem

        // while(getline(iFile, aStudent))
        while(!iFile.eof()) // When using End of File a priming read is required.
        {
            cout << "I read: " << aCity << endl;
            getline(iFile, aCity);
        }
        iFile.close();
    }


    return 0;
}
