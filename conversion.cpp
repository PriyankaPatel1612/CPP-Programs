//conversion of inches into yard and feet
#include<iostream>
using namespace std;

int main()
//coversion of inches of into feet and yards
{
   int inches, feet, yard;
    cout<<"enter the inches :";
   cin>>inches;

    //conversion of inches into feet
   feet/12 =inches;
    cout<<"feet :"<<" "<<inches<<endl;

    //conversion of inches into yard
      yard=inches/36;
      cout<<"yards :"<<" "<<yard<<endl;


//conversion of days into week and years


    int days,week,years;

    cout<<"enter the no of days :";
    cin>>days;

   //conversion of days into years
    years=days/365;

    cout<<endl<<"no of years ="<<" "<<years<<"years";

    //conversion of days into week
   week=days/7;

    cout<<endl<<"no of weeks ="<<" "<<week<<"week";
    
    return 0;
}