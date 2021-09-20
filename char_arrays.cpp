#include<iostream>
using namespace std;
#include<climits>

// character arrays are array of characters. 
// datatype is character (char)
// size is n+1 where n is number of charcters. 
// size is greater by 1 because at end we save null character which tells us end of word. 
// need for null character is in cpp space means compiler understands that after space it may be new variable 
// but entire sentence is input in same variable so to identify end of word  null character is used. 

/*
int main(){
    
    char arr[100] = "apple";
    int i=0;

    while(arr[i]!='\0'){
        cout<<arr[i]<<endl;
        i++; 
    }     
    return 0;
}
*/ 

/*
// input character array is unlike integer or float array there we need loop for input but character array we can directly input out entire word.  

int main(){
    char arr[20];
    cin>>arr;
    cout<<arr<<endl;
    cout<<arr[2];
    return 0;
}
*/ 

/*
// Palindrom word is same from both sides. 
// check palindrome. 

int main(){
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check = true;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=arr[n-1-i])
        {
            check=0;
            cout<<"word is not Palindrome";
            break;
        }
    }
    if(check){
        cout<<"word is palindrome!";
    }
}
*/
/*

// use getline function to input entire line. eg.  cin.gitline(arr,n) 
// if getline used in program use .ignore() function as well to clear buffer. 
// largest word in sentence

int main(){
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int maxlen = 0,currlen = 0;
    int st=0, maxst = 0; 
    
    while(1){
        
        if (arr[i]==' '|| arr[i]=='\0')
        {
            if (currlen>maxlen)
            {
                maxlen = currlen;
                maxst = st;
            }
            currlen = 0;
            st = i+1;
            
        }
        else
            currlen++;
        
        if (arr[i]=='\0')
        {
            break;
        }
        
        i++;
    
      }
      cout<<"Max length : "<<maxlen<<endl;
      for (int  i = 0; i < maxlen; i++)
      {
          cout<<arr[maxst+i];
      }
      
    return 0;
}

*/ 

