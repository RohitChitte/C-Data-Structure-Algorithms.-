#include<iostream>
using namespace std;  

// for logic reffer image "power of 2 bit manipulation"  in image notes folder. 
/*
int isPowerof2(int n){
    return !( n && ( n & n -1 ));
}

int main(){

    int m = 16;
    if(isPowerof2(m)){
        cout<<"Power of 2";
    }
    else 
        cout<<"not power of 2";
    return 0;
}
*/ 

// reffer image name "number of ones in binary representation of number" in image notes folder. 
/*
int numberofones(int n){
    int count = 0;
    while (n){
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
    cout<<numberofones(19);
    return 0;
}
*/  

// for logic reffer image name "subsets"  in image notes. 
void subsets(int arr[],int n){
                    // (1<<n) because if 3 elements is set (1<<n)=1000 = 8  so total elements is subset will be 8
    for (int i = 0; i < (1<<n); i++)
    {
        // here j < n as size of set is n so we need to check at what positions we get 1. 
        for (int j = 0; j < n; j++)
        {
            if (i & 1<<j)
            {
                cout<<arr[j]<<" ";
            }
            
        }cout<<endl;
        
    }
    
}

int main(){
    int arr[4]={1,2,3,4};
    subsets(arr,4);
}
