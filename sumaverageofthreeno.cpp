#include<iostream>
using namespace std;

int main()
{
    int a,b,c,sum,average;
    cout<<"enter the three no. to find sum and average :";
    cin>>a>>b>>c;
    sum=a+b+c;
    average=(a+b+c)/3;

    cout<<endl<<"sum of three no. are ="<<" "<<sum<<endl;
    cout<<"average of three no. are ="<<" "<<average;

    return 0;
}