//using for loops
//a funky approach that is similar to Chrissie's first practical assignment
#include <iostream>
#include <string>

using namespace std;
int main(){

    //initialise variables
    int i = 0;
    int myNumber = 0;
    int userLimit = 0;

    while(i <= 0)
    {
        cout << "Enter the number of times you want me to double your money: ";
        cin >> userLimit;
        if (userLimit < 1){
            cout << "Invalid value, please try again." << endl << endl;
        }
        else{
            cout << endl << endl;
            break;
        }
    }
    
    //basic version
    for (int x = 0; x < userLimit; x++)
    {
        cout << "Iteration number: " << x + 1 << ", User limit: " << userLimit << endl;

        if (x == 0)
        {
            cout << "Enter a number and I will double it: ";
        }
        else if(x == userLimit - 1){
            cout << "Enter a final number and I will double it: ";
        }
        else
        {
            cout << "Enter another number and I will double it: ";
        }
    
        cin >> myNumber;
        cout << endl << "Your double is: " << myNumber * 2 << endl << endl;
    }
    
    return 0;
}


//nested loops
//foreach loop (w. array)