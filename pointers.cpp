#include<iostream>
using namespace std;

/*
// pointer varible stores address of any variable in it addresss is in hexadecimal value. 
// datatype of pointer is same as that of variable of which address it is storing 
//&a gives address of variable a , *aptr = &a so printing aptr gives same value as &a 
// we can acces variable uisng pointer if we print aptr we get address of varible if we print *aptr we get value at that address
// e.g  aptr=2000 (address),  *aptr = 10 (value at address 2000)
// we can modify variables using  pointers 

int main(){
    int a = 10;
    int *aptr  = &a;
    cout<<"aptr "<<aptr<<endl;
    cout<<"*aptr "<<*aptr<<endl;
    cout<<"a "<<a<<endl;

    //modify a uisng pointer. 
    *aptr = 20;
    cout<<"a modified by pointer "<<a;

    return 0; 
}

*/ 

/*
int main(){

      // pointer arithmetic 
    // operators are ++,--,+,-
    // if aptr has address 2000 aptr++ will give 2004 because aptr has address and adding 1 means going to next memory location 
    // adjacent memory address has gap of 4 bits in addreses for integer datatype so incrementation in address depends on datatype of variable . 

    //int a = 10;
    //int * aptr = &a;
     
    char b = 'r';
    char * bptr = &b;

    //cout<<"aptr befor increment : "<<aptr<<endl;
    //cout<<"aptr after increment : "<<++aptr<<endl; 

    cout<<"bptr Before increment : "<<bptr<<endl;
    bptr++;
    cout<<"bptr after increment : "<<bptr<<endl;
  
}
*/

/*
int main(){
    // int a = 10;
    // int * aptr = &a;

    // cout<<*aptr<<enl;
    // *aptr = 20;
    // cout<<a<<endl;

    int arr[]={10,20,30};
    // array behaves in similar way to pointer
    // derefferencing like *arr i.e accessing the array values like pointers
    // by default array points to the 0th index location addresss of array 
    
    // just printing arr will give the address of 0th element of array . 
    // because arr behaves as pointer to 1st element of array.
    // hence we use loop to print or travers array . 
    // *arr will give the value stored at 0th index of array,. 
    cout<<arr<<endl;
    cout<<*arr<<endl;

    cout<<endl;

    int * ptr = arr; // not &arr as arr itself stores address of 1st element of array arr .
    for (int i = 0; i < 3; i++)
    {
        //traversing array using pointer. 
        cout<<*ptr<<endl; 
        ptr++;
    }

    cout<<endl;
    // traversing array arr using arr but not indexing. 
    for (int i = 0; i < 3; i++)
    {
        cout<<*(arr+i)<<endl; // here arr is indexing pointer so incrementing arr here will not give error. 
        // arr++;  //illegal as arr points to address of only 1st element of array and it is fixed.cannot be changed. 
    }
    
    
    return 0;
}
*/ 

/*

int main(){
    int arr[] = {10,20};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
return 0;
}
*/ 

/*
int main(){
    int a = 10; 
    int * aptr  = &a; 

    // pointer  storing address of other pointer use ** new variable will be created in memory. 
    int ** bptr = &aptr; 
    cout<<aptr<<endl; 
    // *bptr will give address of value stored at bptr address i.e address of a.
    cout<<*bptr<<endl;
    // **bptr is derefferencing twice will give us value of a i.e 10. 
    cout<<**bptr<<endl;  

}

*/ 

// passing pointers to functions. 
// important note when we pass a variable to functions actually value of variable is passed in funtion not actual variable. 
// in this scenario use pointers. 

// passing by value so variable won't be swapped. 
/*
 void swap(int a,int b){
         int temp = b;
         b = a;
         a = b;
    
     }
 int main(){
     
     int a = 2; 
     int b = 4; 

     swap(a,b);
     cout<<a<<" "<<b;
     return 0;
 }
 */ 

/*
// pass by refference. by passing the pointers 
 void swap(int * a,int * b) 
 { 
         int temp = * b;
        * b = * a;
        * a =  temp;
    
     }
 int main(){
     
    int a = 2; 
    int b = 4; 

    int * aptr = &a, * bptr = &b;

     swap(aptr,bptr); //swap(&a,&b)
     cout<<a<<" "<<b;
     return 0;
 }
 */ 

/*
// call by value or pass by values. 

void increment(int a){
    a++;
}
int main(){

    int a = 2;
    increment(a);
    cout<<a;
}
*/ 

void increment(int *a){
    *a+=1 ;
}
int main(){
    int a = 2;
    increment(&a);
    cout<<a;
    return 0;
}