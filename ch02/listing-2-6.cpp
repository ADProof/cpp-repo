//preprocessor declarations
#include <iostream>
#include <string>

using namespace std;

int main()
{

    //Declare a variable to store an integer
    int inputNumber;

    //Store integer using user input
    cout << "Enter a number: " << endl;
    cin >> inputNumber;

    //Declare and store a string variable with user input
    cout << "Enter your name: " << endl;
    string inputName;
    cin >> inputName;

    //Output result
    cout << inputName << " your number was: " << inputNumber << endl;

    return 0;
}
