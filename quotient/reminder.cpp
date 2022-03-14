#include <iostream>
using namespace std;

int main()
{
    int dividend, divisor, quotient, reminder;
    cout << "enter the dividend :";
    cin >> dividend;

    cout << endl << "enter the divisor :";
    cin >> divisor;

    quotient = dividend / divisor;
    reminder = dividend % divisor;

    cout << "quotient is :" << quotient;
    cout << endl << "reminder is :" << reminder;

    return 0;
}