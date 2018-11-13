#include <iostream>
#include <fstream>   // has file methods
#include <cstdlib>   // for exit

using namespace std;

int main()
{
    // write some data to a file

    // declare an object capable of writing to a file buffer
    ofstream myOutFile;   // is a file "handle"

    // 1. Open a file
    myOutFile.open("Students.txt");

    // 2. write data to your file
    myOutFile << "Jake" << endl;
    myOutFile << "Jill" << endl;
    myOutFile << "Joe" << endl;

    // 3. close the file
    myOutFile.close();


    // Read the data we just wrote
    // and display on the screen
    ifstream myInFile;   // input file

    // 1. open the file
    myInFile.open("Students.txt");

    // defensive code
    if (!myInFile)
    {
        cout << "Trouble locating the file" << endl;
        cout << "Exiting...." << endl;
        exit(EXIT_FAILURE);
    }

    // you have correctly opened the file
    string myStudent;    // variable to store student info

    // read the data

    while (myInFile >> myStudent)
    {
        cout << "I read: " << myStudent << endl;
    }

    // 3. close the file
    myInFile.close();
    return 0;
}
