#include <iostream>
using namespace std; 

int main(){

    /*
    int n,m;
    cin>>n>>m;
    float arr[n][m];

    //  taking input in 2d arrays. 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    // printing 2d array
    cout<<"Matrix is :"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
        
    }
    return 0;
}
*/ 

/*
// searching in matrix. 

    int n,m,k;
    cin>>n>>m>>k;
    float arr[n][m];

    //  taking input in 2d arrays. 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
            
        }
        
    }
    
    // printing 2d array
    bool flag =  false;
    int i=0,j=0;
    cout<<"Matrix is :"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
        
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j]==k)   {
                cout<<"Element found at "<<i<<" "<<j<<endl;
                flag = true; 
                break;
            }
        }
        
    }
    if (flag==0){
        cout<<"Element not found"; 
    }
   
    return 0;
}
*/

/*
// spiral order matrix 

    int n,m;
    cin>>n>>m;
    float arr[n][m];

    //  taking input in 2d arrays. 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    // printing 2d array
    cout<<"Matrix is :"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
        
    }
    int row_start=0,row_end = n-1,column_start = 0,column_end = m-1;
   cout<<"Printing 2d array in spiral order."<<endl;
   while((row_start<=row_end) && (column_start<=column_end)){
       //for row start . 
       for (int col= column_start; col <= column_end; col++)
       {
           cout<<arr[row_start][col]<<" ";
       }
       row_start+=1;

       //for column_end
       for (int row = row_start; row <= row_end; row++)
       {
           cout<<arr[row][column_end]<<" ";
       }column_end--;

    // for row_end
       for (int col = column_end; col >= column_start; col--)
       {
           cout<<arr[row_end][col]<<" ";
       }
       row_end--;
    //for columns start 
    for (int row = row_end; row >=row_start ; row--)
    {
        cout<<arr[row][column_start]<<" ";
    }column_start++;
    
       
       
   }

    return 0;
}
*/ 
