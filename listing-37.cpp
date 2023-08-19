//do while loop (variation of listing-36)
//executes at least once as the condition is tested after the first iteration

//while loop to capture user input in a series
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i = 0;
    int myNumber = 0;
        
    do
    {
        if (i == 0)
        {
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
        
    } while (i < 5);
    

    return 0;
}