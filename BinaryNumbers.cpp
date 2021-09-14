# include<iostream>
#include<cmath>
using namespace std;

int main(){
/*
    int rem,rev_num=0;
    int n = 323345;
    while (n>0){
    rem = n%10;
    rev_num=rev_num*10+rem;
    n = n/10;
    } 
    cout<<"Reversed Number is "<<rev_num;
*/


/*
int n;
cin>>n;
int sum=0;
int originaln=n;
while(n>0){
int lastdigit= n%10;
sum+= pow(lastdigit,3);
n=n/10;
}
if(sum==originaln){
cout<<"Armstrong number"<<endl;
}
else{
cout<<"not armstrong"<<endl;
}
*/
/*
char a;
cout<<"Enter a character to find ASCII value.";
cin>>a;
cout<<"ASCII vaue of "<<a<<" is "<<int(a);
*/

// Factors of number.
/*
int a;
cout<<"Enter a number";
cin>>a;

for (int i = 1; i < a; i++)
{
    if (a%i==0){
        cout<<i<<endl;
    }
   
}
*/

// factorial.
/*
int n,sum=1,i=1;
cout<<"Enter a Number.";
cin>>n;
while(i<=n){
    sum=sum*i;
    i+=1;
}
cout<<sum;
*/

//vowel or consonent.
/*
char a;
cout<<"Enter a character.";
cin>>a;
if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
    cout<<"Vowel.";
}else
{
    cout<<"Consonent.";
}
*/
return 0;  
    }

