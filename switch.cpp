#include<iostream>
using namespace std;
int main(){
    /*
    // Simple Calculator.
    float a,b;
    cout<<"Enter 2 Numbers.";
    cin>>a;
    cin>>b;
    char op;
    cout<<"\n Enter Operator\n";
    cin>>op;
    switch (op)
    {
    case '+' :
        cout<<a+b;
        break;
    case '-' :
        cout<<a-b;
        break;
    case '*' :
        cout<<a*b;
        break;
    case '/' :
        cout<<a/b;
        break;
    default:
        cout<<"Enter another Operator";
        break;
    }*/


    char a;
    cout<<"Enter any character to check if vowel or not\n";
    cin>>a;
    switch (a)
    {
    case 'a'||'A' :
        cout<<"Vowel";
        break;
    case 'e' :
        cout<<"Vowel";
        break;
    case 'i' :
        cout<<"Vowel";
        break;
    case 'o' :
        cout<<"Vowel";
        break;
    case 'u' :
        cout<<"Vowel";
        break;
    default:
        cout<<"Consonent";
        break;
    }
    return 0;
}