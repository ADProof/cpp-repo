#include<iostream>
using namespace std;

enum CardinalDirections
{
    North = 25,
    East,
    South,
    West
};

int main()
{
    cout << "Displaying directions and their symbollic values" << endl;
    cout << "North: " << North << endl;
    cout << "East: " << East << endl;
    cout << "South: " << South << endl;
    cout << "West: " << West << endl;

    CardinalDirections windDirection = South;
    cout << "Variable windDirection = " << windDirection << endl;

    return 0;
}