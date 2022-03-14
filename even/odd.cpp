//program of checking whether no is even or odd

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"enter the no. to check even or odd ";
    cin>>n;

    if ( n % 2 == 0 )
    {
        cout<<endl<<" Given number" <<n<< " is even";
    }

    else if( n % 2 == 1 )
    {
        cout<<endl<<" Given number "<<n<<" is odd";
    }
}