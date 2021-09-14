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
    // insertion sorting.
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    
   
    cout<<endl<<"Sorted Array is : "<<endl;
    for (int m = 0; m < n; m++)
    {
        cout<<arr[m]<<" ";
    }
    
    

}