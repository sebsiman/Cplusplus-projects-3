#include <iostream>
#include <fstream>

using namespace std;

const int CIPHER = 5;

int main()
{
    ifstream myInFile;
    ofstream myOutFile;

    // 1. Open files
    myInFile.open("Encrypted.txt");
    myOutFile.open("Decripted.txt");

    // defensive code
    if (!myInFile)
    {
        cout << "Trouble locating the file" << endl;
        cout << "Exiting..." << endl;
    }
    else
    {
        char ch;    // variable to store single char
        while(myInFile.get(ch))
        {
            ch = ch - CIPHER;
            myOutFile.put(ch);
        }

        myInFile.close();
        myOutFile.close();
    }
    return 0;
}
