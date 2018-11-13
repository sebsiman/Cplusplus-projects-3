#include <iostream>

using namespace std;

//int computeSum (int, int, int);
void computeSum(int, int, int, int &);
void computeAverage(int &, int &, int &, double &);

int main()
{
    int num1, num2, num3;
    int result;
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Number 3: ";
    cin >> num3;

    cout << "Before the call: " << result << endl;

    computeSum(num1, num2, num3, result);

    cout << num1 << " + " << num2 << " + " << num3 << " = " << result << endl;
    double average;
    computeAverage(num1, num2, num3, average);
    cout << "The average is: " << average << endl;

    cout << "After the call: " << result << endl;

    return 0;
}

void computeSum (int a, int b, int c, int &sum)
{
    sum = a + b + c;
}

void computeAverage(int &a, int &b, int &c, double &avg)
{
    avg = computeSum(a, b, c)/3.0
}
