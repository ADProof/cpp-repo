#include<iostream>
constexpr int Square(int number) {return number * number;}

using namespace std;

int main()
{
    const int ARRAY_LENGTH = 5;

    // Array of 5 integers, initialized to 5 values
    int myNumbers[ARRAY_LENGTH] = {5, 10, 0, -101, 20};

    // Using a constexpr for array of 5*5=25 integers
    int moreNumbers[Square(ARRAY_LENGTH)];

    // user input
    cout << "Enter index of the element to be changed: ";
    int elementIndex = 0;
    cin >> elementIndex;

    cout << "Enter new value: ";
    int newValue = 0;
    cin >> newValue;

    myNumbers[elementIndex] = newValue;
    moreNumbers[elementIndex] = newValue;

    cout << "Element " << elementIndex << " in array myNumbers is: ";
    cout << myNumbers[elementIndex] << endl;

    cout << "Element " << elementIndex << " in array moreNumbers is: ";
    cout << moreNumbers[elementIndex] << endl;

    return 0;


}