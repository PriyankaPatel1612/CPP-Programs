#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the value of a :";
    cin >> a;

    cout << "enter the value of b :";
    cin >> b;

    cout << "before swapping the number" <<endl<< "the value of a is :" << " " << a <<endl<< "the value of b is :" << " " << b << endl;

    a = a + b;

    b = a - b;

    a = a - b;

    cout << "after swapping the number" <<endl<< "the value of a is :" << " " << a <<endl<<  "the value of b is :" << " " << b;

    return 0;
    
}