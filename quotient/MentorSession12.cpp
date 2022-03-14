#include <iostream>
using namespace std;

int main(){
    
    int i=0,j=0,k=0;
    int arr1[5];
    int arr2[5];
    int arr3[10];
    
    
    cout<<"Enter the number of section1 : ";
     for(int i=0 ; i<5 ; i++){
         cin>>arr1[i];
     }
     
     cout<<"Enter the number of section2 : ";
      for(int j=0; j<5 ; j++){
               cin>>arr2[j];
     
      }
             
    for(int k=0; k<10; k++){
        for(int j =0 ; j<5 ; j++){
            for ( int i=0 ; i<5 ; i++){
         if (arr1[i]>arr2[j]){
             arr3[k]=arr1[i];
             i++;
             k++;
         }
         else{
             arr3[k]=arr2[j];
             j++;
             k++;
              }
             
              }
          }
      }
         
         cout<<arr3[k]<<" ";
         
         return 0;
         
     }