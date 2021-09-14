#include <iostream>
using namespace std;
 
// PRIME NUMBER .
/*
int main(){
    int num;
    cout<<"Enter Number to check if even";
    cin>>num;
    int div=2;
    while (div<num)
    {
        if (num%div==0)
        {
            cout<<"Non Prime Number";
            break;
        }
        else
        {
            div = div + 1;
        }
    if (div==num)
    {
        cout<<"Prime Number";

    }
        
    }
    
    return 0;
}
*/

// Prime Number till Nth Number.

/*
int main(){
    int N,i=2,j=1;
    cout<<"Enter Number: ";
    cin>>N;
    while (i<=N)
    {
       int div=2; 
       while (div<=i)
       {
           if (i%div==0)
           {
               i=i+1;
               break;
           }
           else
           {
               div=div+1;
           }
           if (div==i)
           {
               cout<<div<<" is Prime Number\n";
           }
           
           
           
       }
       
    }
    
return 0;
}
*/
// Squaring.
/*
int main(){
    int L;
    cout<<"Enter Length";
    cin>>L;
    int square=L*L;
    cout<<square;
    return 0;
}
*/

// Odd or Even Number
/*
int main(){
    int N;
    cout<<"Enter Number";
    cin>>N;
    if (N%2==0)
    {
        cout<<N<<" is Even ";

    }
    else
    {
        cout<<N<<" is  odd";
    }
return 0;
}
*/
// Sum of N natural numbers. by decrementing loop variable(i--)
/*
int main(){
    int N,sum=0;
    cout<<"Enter Number.";
    cin>>N;
    for (int i = N; i>0; i--)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}*/

/*
int main(){
    int N;
    cout<<"Enter Number";
    cin>>N;
    int F=1;
    for (int i=1;i<N+1;i++)
    {
        F=F*i;
    }
    cout<<F;
    return 0;
}
*/

//Getting ASCI value of any character.
int main(){
int a = 'R';
cout<<a;
return 0;
}