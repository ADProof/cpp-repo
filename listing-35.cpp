//using switch statement
//accept a user input as a number for the ordinal day of the week, and output the day of the week as a string

#include <iostream>
#include <string>

using namespace std;
string dayOfWeek(int dayNumber);

string dayOfWeek(int dayNumber)
{
    string dayName = "";

    switch (dayNumber)
    {
        case 1:
            dayName = "Sunday";
            break;

         case 2:
            dayName = "Monday";
            break;

         case 3:
            dayName = "Tuesday";
            break;

         case 4:
            dayName = "Wednesday";
            break;

         case 5:
            dayName = "Thursday";
            break;

         case 6:
            dayName = "Friday";
            break;

         case 7:
            dayName = "Saturday";
            break;

        default:
            dayName = "Invalid day number entered";
            break;
    }

    return dayName;
}

int main()
{
    int dayNumber = 0;
    cout << "Enter a number and I will respond with the day of the week: ";
    cin >> dayNumber;
    cout << dayOfWeek(dayNumber) << endl << endl;
    return 0;
}