//preprocessor directive
#include <iostream>

using namespace std;

void MultiplyNumbers()
{
    //declare two integer variables for calculation
    int firstNumber;
    int secondNumber;

    cout << "Enter your first number: ";
    cin >> firstNumber;

    cout << "Enter your second number: ";
    cin >> secondNumber;

    //perform calculation
    int result = firstNumber * secondNumber;

    //display result
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << result << endl;
}

int main()
{
    //prompt for integer input, store in variables
    cout << "This program multiples two numbers" << endl;
    MultiplyNumbers();
    return 0;
}