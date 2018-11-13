#include <iostream>
#include <fstream>

using namespace std;
const int CIPHER = 5;

int main()
{
    ifstream myInFile;
    ofstream myOutFile;

    myInFile.open("C:\\Users\\Sebastian.Siman001\\Desktop\\Cipher.txt");
    myOutFile.open("Encrypted.txt");

    if (!myInFile)
    {
        cout << "Trouble locating the file" << endl;
        cout << "Exiting" << endl;
    }
    else
    {
        char ch;
        while(myInFile.get(ch))
        {
            ch = ch + CIPHER;
            myOutFile.put(ch);
        }

        myInFile.close();
        myOutFile.close();
    }

    return 0;
}
