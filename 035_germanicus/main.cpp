#include <iostream>
#include <fstream>

using namespace std;

const int CIPHER = 5;

int main()
{
    ifstream myInFile;
    ofstream myOutFile;

    // 1. Open files
    myInFile.open("C:\\Users\\Sebastian.Siman001\\Documents\\Original.txt");
    myOutFile.open("Cesar.txt");

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
            switch(ch)
            {
            case 'G':
            case 'g':
                ch = '0';
                break;
            case 'E':
            case 'e':
                ch = '1';
                break;
            case 'R':
            case 'r':
                ch = '2';
                break;
            case 'M':
            case 'm':
                ch = '3';
                break;
            case 'A':
            case 'a':
                ch = '4';
                break;
            case 'N':
            case 'n':
                ch = '5';
                break;
            case 'I':
            case 'i':
                ch = '6';
                break;
            case 'C':
            case 'c' :
                ch = '7';
                break;
            case 'U':
            case 'u':
                ch = '8';
                break;
            case 'S':
            case 's':
                ch = '9';
                break;
            }
            myOutFile.put(ch);
        }

        myInFile.close();
        myOutFile.close();
    }
    return 0;
}
