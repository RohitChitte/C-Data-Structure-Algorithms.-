#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array size : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements. "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array is : "<<endl;
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
    // Bubble sorting. using for loop 
    /*
    for (int k = 1; k < n; k++)
    {
        for (int l = 0; l < n-k; l++)
        {
            if (arr[l]>arr[l+1])
            {
                int temp = arr[l];
                arr[l] = arr[l+1];
                arr[l+1] = temp;
            }
            
        }
        
    }
    */ 
   int counter = 1;
   while (counter<n){
       for (int i = 0; i < n-counter; i++)
       {
           if (arr[i]>arr[i+1]){
           int temp = arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
           }
       }
       counter+=1;
       
   }
    cout<<endl<<"Sorted Array is : "<<endl;
    for (int m = 0; m < n; m++)
    {
        cout<<arr[m]<<" ";
    }
    
    

}