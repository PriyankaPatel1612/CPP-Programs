#include<iostream>
using namespace std;

int main()
{ 
    int year;
    cout<<" enter the year to check leap year :";
    cin>>year;

    if(year%400==0)
     {
         cout<<endl<<"entered year is leap year";
     }

    else 
    {
        cout<<endl<<"entered year is not a leap year";
    }
    
    return 0;
}
