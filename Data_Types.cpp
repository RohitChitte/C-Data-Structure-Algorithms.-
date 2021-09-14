#include<iostream>
using namespace std;


// Knowing ASCI value of any character.
/*
int main(){
int a = 'R';
cout<<a;
return 0;
}
*/

//knowing size of data type.
int main(){
    int a ; // variable declaration.
    a=1;    // variable initialization.
    cout<<"size of int is "<<sizeof(a)<<endl;

    float b;
    cout<<"size of float is "<<sizeof(b)<<endl; // can store upto 7 decimal values.

    double e;
    cout<<"size of double is "<<sizeof(e)<<endl;  // can store upto 15 decimal values.
    
    char c;
    cout<<"size of char is "<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool is "<<sizeof(d)<<endl;

    short int si;
    cout<<"size of short int  is "<<sizeof(si)<<endl;  //  short int occupies only 2 bytes.

    long int l;
    cout<<"size of long int  is "<<sizeof(l)<<endl;  //  long int occupies only 8 bytes.
 

    

return 0;
}