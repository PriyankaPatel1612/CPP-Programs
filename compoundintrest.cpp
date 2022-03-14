#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float P,r,t,ci;

    cout << " enter the principle (amount) = ";
    cin>>P;

    cout<<endl<<"enter the rate of intrest = ";
    cin>>r;

    cout<<endl<<"enter the value of time period = ";

    cin>>t;


//formula to calculate compound intrest A=P*(1+r/n)^n/t
    ci=P*pow(1+r/100,t);

    cout<<endl<<"Compound Intrest = "<<ci;

    return 0;
}