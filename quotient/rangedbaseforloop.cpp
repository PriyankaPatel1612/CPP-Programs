#include<iostream>
using namespace std;
int main()
{
    int num_array[] = { 1 , 2 , 3 , 4 , 5 } ;

    for(int num : num_array)
    {
        cout<<num<<" ";
    }
    return 0;

}