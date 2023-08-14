#include <iostream>
using namespace std;

// function declaration
int DemoConsoleFunction();

int main()
{
    // function invocation
    return DemoConsoleFunction();
    //return 0;
}


// function implementation
int DemoConsoleFunction()
{
    cout << "This is a simple string literal" << endl;
    cout << "Writing the number five: " << 5 << endl;
    cout << "Performing division 10/5 = " << 10 / 5 << endl;
    cout << "Pi is equal to 22/7, or: " << 22.0 / 7 << endl;
    return 0;
}