#include<iostream>
using namespace std;

int main(){
  // printing only 1st n odd numbers using continue statement.
  /*
  int n;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    if(i%2==0){
      continue;
    }
    cout<<i<<" is Odd number\n";
  }
  */


/*
//Prime or non prime using break statement.
  int n;
  cin>>n;
  int i;
  for (i=2;i<n;i++){
    if(n%i==0){
      cout<<"Non Prime Number.";
      break;
    }
    }
  if(i==n){
      cout<<"Prime Number";
  }
*/

//printing only prime numbers in given range.
/*
int a,b,j;
cin>>a;
cin>>b;
cout<<"Prime Numbers in range "<<a<<" to  "<<b<<" is\n";
for (int i=a;i<=b;i++){
  for (j=2;j<i;j++){
    if (i%j==0)
    {
      break;
    }
  }
  if (j==i)
    {
      cout<<i<<endl;
    }

}
*/


    return 0;
}
