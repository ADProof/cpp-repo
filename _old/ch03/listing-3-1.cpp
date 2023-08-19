//preprocessor directives
#include <iostream>

using namespace std;

int main()
{
    //declare two integer variables for calculation
    int firstNumber;
    int secondNumber;

    //prompt for integer input, store in variables
    cout << "This program multiples two numbers" << endl;

    cout << "Enter your first number: ";
    cin >> firstNumber;

    cout << "Enter your second number: ";
    cin >> secondNumber;

    //perform calculation
    int result = firstNumber * secondNumber;

    //display result
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << result << endl;

    return 0;
}