//the user must input two numbers. Then we print the sum by calculating (adding) the two numbers:

#include <iostream>
using namespace std;
int main()
{
    int x, y, sum;
    cout << "Add two numbers together. \n";
    cout << "Enter the first number and presss ENTER: " << endl;
    cin >> x;
    cout << "Enter the second number and presss ENTER: " << endl;
    cin >> y;
    sum = x + y;
    cout << "The sum is: " << sum << endl;
    return 0;
}