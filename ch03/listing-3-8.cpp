#include<iostream>

using namespace std;

constexpr double GetPi() { return 22.0/7; }
constexpr double XPi(int x) { return x * GetPi(); }

int main()
{
    constexpr double pi = GetPi();
    
    cout << "constexpr pi evaluated by compiler to " << pi << endl;
    cout << "constexpr XPi(2) evaluated by compiler to " << XPi(2) << endl;

    int multiple = 5;
    cout << "(non-const) integer multiple = " << multiple << endl;
    cout << "constexpr is ignored when XPi(multiple) is invoked, ";
    cout << "returns " << XPi(multiple) << endl;

    return 0;

}