#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Generating random no. are :";
for(int i=1;i<=10;i++)
{
    num=rand()%10;
    cout<<" "<<num<<" ";
}
return 0;
}