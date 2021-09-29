#include<iostream>
using namespace std; 

// bit manipulation - dealing with bits and binary operators. 
// using << bitwise operator will shift number by that many positions to left. 
// returning return ((n & (1<<pos))!=0) will return 0 or 1 
 
 /*
 int getBit(int n, int pos){

     return ((n & (1<<pos))!=0);
 } 

 int main(){
     cout<<getBit(5,2)<<endl;
 }

 */ 

// set bit
// set bit means to set bit to 1
// unset bit means to set bit to 0 
// << left shift operator is used to set the possition 
// or operator is used set the bit . if 0 | 1 will set 1 
// returning  (n | (1<<pos))  will return a number

/*
int setBit(int n,int pos){
    return (n | (1<<pos));
}
int main(){

    cout<<setBit(5,1)<<endl;

    return 0;
}

*/ 

/*
int clearBit(int n,int pos){
    int mask = ~(1<<pos);
    return (n && mask);
}
int main(){

    cout<<clearBit(5,2);
    return 0;
}
*/ 

// update bit is clear bit then set bit. 
int updateBit(int n, int pos, int value){
   int mask = ~(1<<pos);
   n = n & mask;
    return (n | (value<<pos)) ;

}
int main(){
    cout<<updateBit(5,1,1)<<endl;

    return 0;
}

// for entire explaination reffer video . 
//  https://youtu.be/MiJdgxTWaFs?list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ