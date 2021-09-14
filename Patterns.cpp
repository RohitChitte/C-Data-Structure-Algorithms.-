#include<iostream>
using namespace std;
int main(){

    /*
    // Printing Rectangular Pattern
    int row,columns;
    cout<<"Enter Rows and Columns in Rectangle.\n";
    cin>>row;
    cin>>columns;
    for (int i =1;i<row+1;i++){
        for (int j=1;j<columns+1;j++){
            cout<<" $";
        }
        cout<<endl;
    }*/

    // Printing hollow rectangle pattern 
    /*
    int row,columns;
    cout<<"Enter Rows and Columns in Rectangle.\n";
    cin>>row;
    cin>>columns;
    for (int i =1;i<row+1;i++){
        for (int j=1;j<columns+1;j++){
            if((j==1||j==columns||i==1||i==row)){
                cout<<" * ";

            }else
            {
                cout<<"   ";
            }
                
            
            }
            cout<<endl;
        }*/

        // Half Pyramid Pattern 
        
        /*int rows;
        cout<<"Enter Number of rows in pyramid.";
        cin>>rows;
        for (int i = 1; i < rows+1; i++)
        {
            for (int j = 1; j < i+1; j++)
            {
                cout<<" $ ";
            }cout<<"\n";    
        }
        */

       // inverted pyramid.
       /*
       int rows;
       cout<<"Enter Rows";
       cin>>rows;
       for (int i = 1; i < rows+1; i++)
       {
           for (int j = (rows+1) - i; j >0 ; j--)
           {
               cout<<" $ ";
           }cout<<endl;  
       }
       */

    // Printing left half pyramid.
    /*
    int rows;
       cout<<"Enter Rows";
       cin>>rows;
       for (int i = 1; i < rows+1; i++)
       {
           for (int j = (rows+1)-i; j >0 ; j--)
           {
               cout<<"   ";
           }
           for (int k = 1; k < i+1; k++)
           {
               cout<<" $ ";
           }
           cout<<endl;   
       }
     */

    /*
    int rows;
        cout<<"Enter Number of rows in pyramid.";
        cin>>rows;
        for (int i = 1; i < rows+1; i++)
        {
            for (int j = 1; j < i+1; j++)
            {
                cout<<" "<<j<<" ";
            }cout<<"\n";    
        }
    */

   /*
   // Printing half inverted pyramid numberd pattern. 
   int rows;
       cout<<"Enter Rows";
       cin>>rows;
       for (int i = 1; i < rows+1; i++)
       {
           for (int j = (rows+1) - i; j >0 ; j--)
           {
               cout<<" "<<(rows+1)-j-(i-1)<<" ";
           }cout<<endl;  
       }
    */

   /*
   // half pyramid ith row numbered pattern. 
   int rows;
        cout<<"Enter Number of rows in pyramid.";
        cin>>rows;
        for (int i = 1; i < rows+1; i++)
        {
            for (int j = 1; j < i+1; j++)
            {
                cout<<" "<<i<<" ";
            }cout<<"\n";    
        }
*/

/*
// inverted pyramid ith iteration numbered. 
    int rows;
    cout<<"Enter Rows";
    cin>>rows;
    for (int i = 1; i < rows+1; i++)
    {
        for (int j = (rows+1) - i; j >0 ; j--)
        {
            cout<<" "<<i<<" ";
        }cout<<endl;  
    }
*/

// Floyds pyramid.
/*
int rows;
        cout<<"Enter Number of rows in pyramid.";
        cin>>rows;
        int k=1;
        for (int i = 1; i < rows+1; i++)
        {
            for (int j = 1; j < i+1; j++)
            {
                cout<<" "<<k<<" ";
                k = k+1;
            }cout<<"\n";    
        }
*/

// Binary pyramid. 
/*
int rows;
        cout<<"Enter Number of rows in pyramid.";
        cin>>rows;
        for (int i = 1; i < rows+1; i++)
        {
            for (int j = 1; j < i+1; j++)
            {
                if ((i+j)%2==0){
                    cout<<" "<<1<<" ";
                }else{
                    cout<<" "<<0<<" ";
                }
                
            }cout<<"\n";    
        }
*/
/*
// rhombus pattern
int n;
cout<<"Enter Rows";
cin>>n;
for (int i = 1; i <= n; i++)
{
    for (int k = n-i; k > 0; k--)
    {
        cout<<" ";
    }
    for (int j = 1; j < n+1; j++)
    {
        cout<<" "<<"$"<<" ";
    }
    cout<<"\n";
    
}
*/
/* Number Pyramid patterns. 
int n;
cout<<"Enter rows";
cin>>n;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= n-i; j++)
    {
        cout<<" ";
    }
    for (int k = 1; k <= i; k++)
    {
        cout<<" "<<k<<" ";
    }cout<<"\n";
    
} */

/*
// Palindrome Pattern.
int rows;
    cout<<"Enter Rows";
    cin>>rows;
    for (int i = 1; i < rows+1; i++)
    {
        for (int j = (rows+1) - i; j >0 ; j--)
        {
            cout<<"   ";
        }
       for (int k = 1; k < i+1; k++)
       {
           cout<<" "<<i+1-k<<" ";
       }
       for (int l = 1; l < i; l++)
       {
           cout<<" "<<l+1<<" ";
       }
       
*/

// Star Patterns. 
/*
int rows;
    cout<<"Enter Rows";
    cin>>rows;
    for (int i = 1; i < rows+1; i++)
    {
        for (int j = (rows+1) - i; j >0 ; j--)
        {
            cout<<"   ";
        }
       for (int k = 1; k < i+1; k++)
       {
           cout<<" "<<"*"<<" ";
       }
       for (int l = 1; l < i; l++)
       {
           cout<<" "<<"*"<<" ";
       }        
        cout<<endl;    
    }
    for (int a = 1; a < rows+1; a++)
    {
        for (int b = 1; b < a+2; b++)
    {
        cout<<" "<<" "<<" ";
    }
    for (int c = rows-a; c >0 ; c--)
    {
        cout<<" "<<"*"<<" ";
    }
    for (int d = (rows-1)-a; d >0 ; d--)
    {
        cout<<" "<<"*"<<" ";
    }   
    cout<<endl;
    }
*/
int n;
cout<<"Enter rows";
cin>>n;
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= n; j++)
    {
        if (((i+j)%4==0) || ((i==2)&&(j%4==0)))
        {
            cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }
        
       
    }
     cout<<endl;
    
}

    




    

    
    
    



    return 0;
}