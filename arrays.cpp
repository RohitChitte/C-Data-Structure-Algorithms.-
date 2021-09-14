#include<iostream>
#include<climits>
using namespace std;

int main(){
    /*
    // Initializing array . 
    int array[3] = {1,2,3};
    array[3]=1;
    array[4]=2;
    cout<<array[3];
    */
   // Initializing array by user input and output that array .
   /*
   int n ; 
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
   for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
   */
  // 

  int n ; 
   cin>>n;
   // max = INT_MIN,min = INT_MAX this will assigm minimum and maximum possible integer in cpp. 
   int arr[n],maxNo = INT_MIN,minNo = INT_MAX ;
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
   for (int i = 0; i < n; i++)
   {
       // alternatives for below if else statements. 
       maxNo = max(arr[i],maxNo);
       minNo = min(arr[i],minNo);
       
       /*
       if (arr[i]>max){
           max = arr[i];
       }
       if (arr[i]<min){
           min = arr[i];
       }
       */
   }
   cout<<"max = "<<maxNo;
   cout<<"\nmin = "<<minNo;
   
 return 0;  
}
