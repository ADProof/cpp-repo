#include <iostream>
#include <string>

using namespace std;

int main()
{

//initialise variables
    int i = 0;
    string car = "";
    int userLimit = 0;
    

    while(i <= 0)
    {
        cout << "Enter the number of cars you would like in the motorpool: ";
        cin >> userLimit;
        if (userLimit < 1){
            cout << "Invalid value, please try again." << endl << endl;
        }
        else{
            cout << endl << endl;
            break;
        }
    }

    //input cars
    string cars[userLimit] = {}; //empty array of a set size
    for (int x = 0; x < userLimit; x++)
    {
        if (x == 0)
        {
            cout << "Enter the first car model: ";
        }
        else if(x == userLimit - 1){
            cout << "Enter the final car model: ";
        }
        else
        {
            cout << "Enter another car model: ";
        }
    
        cin >> car;
        cars[x] = car;
    }

    cout << "The cars in your motorpool are: \n";
    //output cars (for loop)
    /*     
    for (int y = 0; y < userLimit; y++)
    {
        cout << cars[y] << "\n";
    } */

    //output cars (foreach loop)
    for (string myCar : cars)
    {
        cout << myCar << "\n";
    }
    
    return 0;
}