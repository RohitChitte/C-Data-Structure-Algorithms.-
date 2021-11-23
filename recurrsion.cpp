#include<iostream>
using namespace std; 

// sum of n natural nubers by recursion. 
/*
int sum(int n){
    if (n==0){ 
        return 0;
    }
    return n+sum(n-1);
}
int main(){

    cout<<sum(3);
    return 0;
}
*/ 

/*
power of n using recurssin. 
int power(int n,int p){
    if (p==0){
        return 1;
    }
    else if (p==1){
        return n;
    }
    return n*power(n,p-1);

}
int main(){
    cout<<power(4,3);
    return 0;
}
*/ 

/*
// factorial using recurssion.

int factorial(int n){
    if (n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }
    return n*factorial(n-1);

}
int main(){
    cout<<factorial(5);
    return 0;
}

*/ 
/*
// fiboncacchi using recursion. 
int fibonacci(int n){
    if (n==1 || n==0){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    cout<<fibonacci(5);
    return 0;
}
*/ 

//array sorting check using recursion

bool check(int arr[],int n){

    if (n>=1){
        if (arr[n]>arr[n-1]){
            return true;
        }
        return false;
    }
    return check(arr[], n-1-1);
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    cout(check(arr,6));
    return 0;
}