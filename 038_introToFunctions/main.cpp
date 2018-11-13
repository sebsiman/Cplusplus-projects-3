#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number;
    double result;

    cout << "Enter a number: " << endl;
    cin >> number;

    // call a built in function
    result = sqrt(number);

    cout << "The square root of " << number << " is: " << result << endl;

    return 0;
}
