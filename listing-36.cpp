//while loop to capture user input in a series
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i = 0;
    int myNumber = 0;
    //capture 5 inputs print each to screen
    while (i < 5)
    {
        if (i == 0){
            cout << "Enter a number and I will double it: ";
        }
        else if(i == 4){
            cout << "Enter a final number and I will double it: ";
        }
        else
        {
            cout << "Enter another number and I will double it: ";
        }
        
        cin >> myNumber;
        cout << endl << "Your double is: " << myNumber * 2 << endl << endl;
        i++;
    }
    
}