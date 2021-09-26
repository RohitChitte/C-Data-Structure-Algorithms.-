#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main(){

/*
// converting string from lower to upper case. 
    string str = "asfksdjdf";
    // cout<<'b'-'B'<<endl;  // answer is 32 substracting lowercase letter with correspoinding upperecase letter.
                              // conclusion is to convert lower to uppercase substract 32 . from letter. 
    // find differnce in ascii valu of upper and lower case character. 
    cout<<'a'-'A'<<endl;  // differen in both cases in 32 so ascii value of any smaller lette is 32 greater than ascii of greater letter. 
    cout<<'b'-'B'<<endl;
 
    // convert into upper case.
    for (int i = 0; i < str.size(); i++)
    {
        // checking that character in lower case. 
        if (str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
        
    }
    // printing string converted to uppercase. 
    cout<<str<<endl;
    // conver to lower case. 
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
        
    }
    // printing string converted from lower to upper case. 
    cout<<str<<endl;

// built in funtion to convert string form upper to lower or vice vers. 
string s = "sfljsalkdjfsaf"; 

// transform is a function
// parameter s.begin() s.end() to specify which string to tranform . 
// s.begin() second time specify from where to start transforming . 
// last paramenter specify how to transfoerm . tolower or toupper. 
cout<<"Tranforming using transform funtions"<<endl;
transform(s.begin(),s.end(),s.begin(), ::toupper);
cout<<s<<endl;
transform(s.begin(),s.end(),s.begin(), ::tolower);
cout<<s<<endl;
*/ 

/*
//sorting numeric string. 

string s = "7987932412";
sort(s.begin(),s.end(),greater<int>());  

// greater<int>() parameter is used to sort in descending order.  

/*
// alternative way to sort in descending order if greater<int>() is not used. 
//sort(s.begin(),s.end());
//cout<<s<<endl;
 /*
 for (int i = s.size(); i >= 0; i--)
 {
     cout<<s[i];
 }
*/ 

string s = "slfjaslfouwerh";
int freq[26];

for (int i = 0; i < 26; i++)
{
    freq[i]=0;
}

for (int i = 0; i < s.size(); i++)
{
    freq[s[i]-'a']++;
}
char ans = 'a';
int maxF = 0;
for (int i = 0; i < 26; i++)
{
    if (freq[i]>=maxF)
    {
        maxF = freq[i];
        ans = i+'a';
    }
    
}

cout<<maxF<<" "<<ans<<endl;





    return 0;
}

