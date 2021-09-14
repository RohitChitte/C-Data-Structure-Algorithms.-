#include<iostream>
using namespace  std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("Input.txt","r",stdin);
        freopen("Output.txt","w",stdout);
    #endif

    // greatest number of 3
    /*
    int a,b,c;
    cin>>a>>b>>c;

    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<" is greatest";
        }
        else
        {
            cout<<c<<" is greates";
        }
        
        
    }else
    {
        if (b>c)
        {
            cout<<b<<" is greatest";
        }else
        {
            cout<<c<<" is greatest";
        }
        
        
    }*/

    // odd or even numbers.
    /*
    int N;
    cin>>N;
    if (N%2==0)
    {
        cout<<N<<" is even Number.";
    }
    else
    {
        cout<<N<<" is Odd Number.";
    }
    */

   // to check type of traingle
   int a,b,c;
   cin>>a;
   cin>>b;
   cin>>c;
   if (a==b && b==c)
   {
       cout<<" Equilateral Triangle";
   }
   else if (a==b || a==c || b==c)
   {
       cout<<"Isoceleous Triangle";
   }
   else
   {
       cout<<"Scalene Triangle.";
   }
   
   
   

    return 0;   
}
    