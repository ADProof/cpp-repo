//better user input for strings example
//input using cin terminates at the first empty space, so "John Doe" input into a variable would only return "John"
//use getline function instead

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string firstName, lastName, fullName, greeting;
    cout << "Identify yourself.... \n";
    cout << "Enter your full name and press ENTER: ";
    getline(cin, fullName);

/*     cout << "Enter your given name and press ENTER: ";
    cin >> firstName;
    cout << "Enter your family name and press ENTER: ";
    cin >> lastName; 
    fullName = firstName + ' ' + lastName; */
    greeting = "Hello ";
    greeting = greeting.append(fullName);
    greeting = greeting.append(", nice to meet you!\n");
    cout << greeting << endl;

    return 0;
}