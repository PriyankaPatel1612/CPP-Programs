#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x,p,result;

    cout<<"enter the value of x =  ";
    cin>>x;

    cout<<endl<<"enter the value of power p =  ";
    cin>>p;

    result=pow(x,p);

    cout<<endl<<"the power of x to the power p is =  "<<result;


}