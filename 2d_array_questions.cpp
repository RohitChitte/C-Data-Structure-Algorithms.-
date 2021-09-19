#include<iostream>
using namespace std;

// 1sec = 10^8 operations. 
/*
//Matrix Transpose. 
// remember don't traverse all elements os 2d array for transpose otherwise array will be unchanged. 
int main(){
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j  = i; j < 3; j++)
        {
            //swap
            int temp = A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
        
    }
    //print
    cout<<"Transpose is : "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<A[i][j]<<" ";
        }cout<<endl;
        
    }
    
    
    return 0; 
}
*/ 

/*
// Matrix Multiplication . 
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
    int m3[n1][n3];
    
    // create null matrix to store multiplication results
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            m3[i][j]=0;
        }
        
    }
    

    for (int i = 0; i < n1 ; i++)
    {
        //single statement can be written without curly braces in for loop
        for(int j=0;j<n2;j++)
            cin>>m1[i][j];
    }
     
    for (int i = 0; i < n2 ; i++)
    {
        //single statement can be written without curly braces in for loop
        for(int j=0;j<n3;j++)
            cin>>m2[i][j];
    }
    //Matrix multiplication. 
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                m3[i][j]+=m1[i][k]*m2[k][j];
            }
            
        }
        
    }
    cout<<"Multiplication of matix is : "<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<m3[i][j]<<" ";
        }cout<<endl;
        
    }
    
    
    return 0;
}
*/ 

// Important Question. 
// 2D Matrix Search. 
// speciality of matrix is elements in rows and columns are in increasing oreder
//like  1 4 7 11
//      2 5 8 12 
//      3 6 9 16 
//      10 13 14 17 
// so pseudocode is start from top right element 
// suppose at (r,c)
// if matrix[r][c]==target 
// true 
// if matrix[r][c]> target
//    c--
// else 
//      r++
// 2 possible starting points from top right or bottom left 
// because only at these positions we have options to go to grater or smaller numbers. 

int32_t main(){
    int n,m; cin>>n>>m;
    int target; cin>> target;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>mat[i][j];
        }
    }
        
        // going to top right position. 
        int r=0, c=m-1;
        bool found = false;
        while(r<n && c>=0 ){
            if(mat[r][c]==target){
                found = true;
                break;
            }
            if (mat[r][c]>target)
            {
                c--;
            }
            else{
                r++;
            }
            
        }
        if(found){
                cout<<"Element found";
            }
        else{
                cout<<"Element not found.";
            }
            return 0;
      
}
