#include<iostream>
using namespace std;

// linear search time coplexity of n 
/*
int linearSearch(int arr[],int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,key;
    cout<<"Enter Size of array ";
    cin>>n;
    cout<<"Enter elements in an array ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key to searched ";
    cin>>key;
    cout<<"Index is "<<linearSearch(arr,n,key);
    
    return 0;
}*/

// Binary  Search  
int binarySearch(int arr[],int n, int key){
    int s = 0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key){
            return mid;
        }else if (arr[mid]>key){
            e = mid-1;
        }else{ 
            s = mid+1;
    }
    }
    return -1;
}
int main(){
    
    int n;
    cout<<"Enter Size ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter Elements " ;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter Key ";
    cin>>key;

    cout<<binarySearch(arr,n,key);
    return 0;
}  