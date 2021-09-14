#include <iostream>
using namespace std;
#include<math.h>
#include<bits/stdc++.h>

/*
//Prime Numbers between range using functions. 
bool isprime(int num){
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i==0){
            return false;
        }
    }
    return true;
    
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    for (int i = a; i <= b; i++)
    {
        if (isprime(i)){
            cout<<i<<endl;
        }
    }
    
}*/
/*
// Fibonacci series
void fib(int n){
    int t1 = 0;
    int t2 = 1;
    int nextterm;
    for (int i = 1; i <= n+1; i++)
    {
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1 = t2;
        t2 = nextterm;
        

    }
    
}

int main(){
    int n;
    cin>>n;
    cout<<"Fibonacci Series";
    fib(n);
}
*/

// Factorial.
/*
int fact(int n){
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum= sum*i;
        //sum*=i; //same as above using operators.
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
*/
/*
//Calculate nCr
int fact(int n){
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum= sum*i;
        //sum*=i; //same as above using operators.
    }
    return sum;
}

int main(){
    int n,r;
    cin>>n;
    cin>>r;
    int result = fact(n)/(fact(n-r)*fact(r));  
    cout<<result;
return 0;
}
*/

/*
//Pascal Triangle.
// for logic part reffer below url.
//https://youtu.be/8vzk_JBKGcQ?list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&t=643

int fact(int n){
   
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum= sum*i;
        //sum*=i; //same as above using operators.
    }
    return sum;
}

int nCr(int n,int r){
    //cin>>n;
    //cin>>r;
    int result = fact(n)/(fact(n-r)*fact(r));  
    //cout<<result;

return result;
}
int main(){
    int n;
    cin>>n;
    cout<<"Pascal Triangle";
    for (int i = 0; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<nCr(i-1,j-1)<<" ";
        }cout<<endl;
        
    }
    
}
*/

/*
// correction needed  video 16 question 2nd.
bool check(int x,int y,int z){
    int a = max(x,max(y,z));
    int  b,c;
    if (a==x){
        b=y;
        c=z;
    }else if (a==y)
    {
        b==x;
        c==z;
    }else {
        b==x;
        c==y;
    }

    if (a*a == b*b + c*c)
        return true;
    return false;
    }


int main(){
    int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;
    if (check(x,y,z)){
        cout<<"Pythagorian triplet";
    }else{
        cout<<"Not pythagorian triplet";
    }

}
*/

/*
//Binary conversion to decimal .
int main(){
int binary,decimal=0,count=0;
cin>>binary;

while (binary>0){
int rem = binary%10;
decimal += rem*pow(2,count);
binary = binary/10;
count+=1;
}
cout<<"Decimal Number:" <<decimal;

}
*/


/*
//Octal to decimal . 
int main(){
int binary,decimal=0,count=0;
cin>>binary;

while (binary>0){
int rem = binary%10;
decimal += rem*pow(8,count);
binary = binary/10;
count+=1;
}
cout<<"octal to Decimal Number:" <<decimal;

}

*/

/*
//decimal to binary. 
#include <iostream>  
using namespace std;  
int main()  
{  
int a[10], n, i;    
cout<<"Enter the number to convert: ";    
cin>>n;    
for(i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2;  
}    
cout<<"Binary of the given number= ";    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}    
}  

*/

int hexadecimalToDecimal(string n){
      int ans = 0;
      int x = 1;
      int s = n.size();
      for (int i = s-1; i >=0; i--
      {
          if n[i]>=0 && n[i]<=9{
              
          }
      }
      
}

int32_t main(){
    string n;
    cin>>n;

    cout<<hexadecimalToDecimal(n)<<endl;

}
