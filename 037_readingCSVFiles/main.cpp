#include <iostream>
#include <fstream> // needed to work with files

using namespace std;

int main()
{
    ifstream iFile; // input file handle
    ofstream oFile; // output file handle
    string aMake;
    string aModel;
    string yearMade;
    string MPG;
    string temp;

    iFile.open("CSV.csv");

    if(!iFile) // defensive programming
    {
        cout << "Trouble locating the file." << endl;
        cout << "Exiting." << endl;
    }
    else
    {
        // getline(iFile, aCar, ','); // priming read
        // while(!iFile.eof()) // When using End of File a priming read is required.
        while(getline(iFile, aMake, ','))
        {
            getline(iFile, aMake, ',');
            cout << "Make: " << aMake << endl;
            getline(iFile, aModel, ',');
            cout << "Model: " << aModel << endl;
            getline(iFile, temp, ',');
            // yearMade = atoi(temp.c_str)
            cout << "I read: " << yearMade << endl;
            getline(iFile, temp, ',');
            cout << "I read: " << MPG << endl;
        }

        iFile.close();
    }


    return 0;
}
