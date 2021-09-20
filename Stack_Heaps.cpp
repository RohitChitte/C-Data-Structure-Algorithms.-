# include<iostream>
using namespace std; 
// when a function is called it is added in memory stack of fixed size. 
// 1st main function is added in stack then other function 
// functions are poped in reverser order of which they were added in memory stack . 
// function addded 1st e.g main is poped at last and funciton added at last in memory stack is popped first form memeroy stack . 
// function is poped when it returns a value. 
// as this stack is of fixed size calling many funcitons or adding many funcitons in stack results in stack overflow.
// variables in 1 function can't be used in other funtion due to scope of variable is limited to funtion in which it is present. 
// when variables are stored in stack memory we cannot control the amount of memory allocated at compile time. 
// to control amount of memroy allocated or to deallocate memory manually we use dynamic memory allocation. 

// heap size is not fixed (free memeory) max size = size of virtual memory. 
// stack size is fixed . 
// so incase of large memory requirement use heap (recurssion problems.) 

 // variable stored in heap using pointer
 // pointer storing address of variable in heap memory is stored in stack memory. 
 // varaible stored in heap needs to be deallocated manually . 
 // in stack memory is allocated and deallocated automaticcally by system. 
 
// to deallocate memroy use delete operator. delete(pointer_storing_the_address_of_value_in_heap_memory.)
int main(){
    int a = 10; // a stored in stack memory
    int * p = new int();  // allocating space in heap memroy to store integer and storing that address in stack memory. 
    *p = 10;
    delete(p); // dealocate the heap memory so no value at location p now but p is still pointing at the address in heap memory. 
               // dangling pointer points at address where no value is stored. 
               // dangling pointer should not be there. 
               // we can either use that pointer or delete from stack memory. 

    p = new int[4];  // storing address of 0th index of array stored in heap memroy. 
                     // we can change size of this array at runtime dynamic memroy allocation is possible in heap. 

    delete[]p;   // delete the array in heap memory. 

    p = NULL; //  so p will not point to any location in heap 
                // so p will be destroyed after main funtion is deleted because it is stack variable. 
                
                // not deallocating heap memory variable can cause memroy leak. 
                // to avoid memory leak deallocate / free the heap memory. 
                

    return 0;
}