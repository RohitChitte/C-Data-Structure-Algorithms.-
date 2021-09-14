#include<iostream>
using namespace std;
#include<climits>
#include "bits/stdc++.h"
// Maximum element in each iteration in array 
// compare betwenn arr[i]and arr[i-1]
/*
int main(){

     int mx = INT_MIN;
     int n; 
     cin>>n;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }
     for (int i = 0; i < n; i++)
     {
         mx = max(mx,arr[i]);
         cout<<mx<<endl;
     }
     
     return 0;

}
*/

// subarrays are contiguous number of possible subarrays are nC2+n because to select an array we need to indexes so there are nC2 ways of selecting arrays + n arrays of length 1
// subsequeces are non contagious arrays. 2^n possible subsequence of array because for each elemen i have 2 options to select or deselect for n elements 

//sum of subarrays. ]
/*
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    cout<<"Sums of subarrays are"<<endl;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum+=a[j];
            cout<<sum<<endl;
        }
        
        
    }
        
    return 0;
}*/

// finding length of longest arithmentic array

// Constraints. 
// 1 sec = 10 ^ 8 operations approx
// 20 sec = 2 x 10^9 operations. 
// max size of gloabally is 10 ^ 8. 
// consider that variable in constraint analysis on which loop is applied 
// ans is initialized to 2 because minimum length of arithmetic subarray is 2 i.e 2 elements will have some  common difference. 
// pd is previosu difference initialize with a[1]-a[0]
// j is initalized with 2 because we have aldready calculated difference of 1st 2 elements. 
// and loop is to check to conditions on all elements 
// if differenc equals to previos differenc if yes then increment length of current arry by 1 else calcualte new previos differnce and assign current as 2 becuase min length of artimetic array is 2 elements. 
// and after checking both elements update ans by max of current and ans
// current length of array keep on increasing in case of common differnce == pd.
// else current differece will be reassigned to 2. 

/*
int main(){
     int n;
     cin>>n;
     int a[n];
     for (int i = 0; i < n; i++)
     {
        cin>>a[i];
     }
     int ans = 2;
     int pd = a[1] - a[0];
     int j = 2;
     int curr = 2;
     while (j<n){
         if (pd==a[j]-a[j-1])
         {
            curr++;
         }
         else{
             pd = a[j]-a[j-1];
             curr = 2;
         }
         ans = max(ans,curr);

         
         j++;
     }
     cout<<ans<<endl;
     
    return 0;
}
*/

// Record Breaker. 
/*
 int main(){
     int n;
     cin>>n;
     int a[n+1];
     a[n]=-1;
     for (int i = 0; i < n; i++)
     {
         cin>>a[i];
     }
    cout<<"Number of Record Breaking days are "<<endl;
     if(n==1){
            // if length of arry is one then number of record breaking day will be only 1
            cout<<"1"<<endl;
            return 0 ;
        }
    int ans = 0;
    int mx = INT_MIN;
    
    for (int i = 0; i < n-1; i++)
    {    

        if(a[i]>mx && a[i]>a[i+1]){
            //mx = a[i] ;
            ans++;
         }
         mx = max(mx,a[i]);
    }
    cout<<ans<<endl;


     return 0;
 }
 */

// Questions in top MNCs
// First repeating element.

/*
int main(){
     int mx = INT_MIN;
     int n; 
     cin>>n;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }

    //here N is const so value is unchangeable.
    const int N = 1e6+2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i]=-1;
    }
    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if(idx[arr[i]]!=-1){
            minidx = min(minidx,idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx+1<<endl;
    }
    
    

     return 0;
}
*/


// subarray with given sum
/*
int main(){
   int n,s;
   cin >> n >> s;

   int a[n];

   for (int i = 0; i < n; i++)
   {
       cin>>a[i];

   }
   int i=0, j=0, st=-1, en = -1,sum = 0;
   while (sum+a[j]<=sum && j<n)
   {
       sum += a[j];
       j++;
   }
   if(sum==s){
       cout<<i+1<<" "<<j<<endl;
       return 0;
   }
   while(j<n){
       sum += a[j];
       while(sum>s){
       sum-=a[i];
       i++;
       }
   
   if (sum==s){
       st=i+1;
       en=j+1;
       break;
   }
   j++;
   }
   cout<<st<<" "<<en<<endl;
   return 0; 

    
}
*/
/*
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    const int N = 1e6+1;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i]=false;
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]>=0){
            check[a[i]]=1;
        }
    }
    int ans = -1;
    for (int i = 1; i < N; i++)
    {
        if(check[i]==0){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
    
  return 0;
}
*/


/*
// printing all subarrays
// then finding the maximum  subarray sum .  
// 1st loop for start point 2nd loop end point 3rd loop print numbers among start and end point.
// this is brut force approach. 

int main(){
     int n;
     cin>>n;

 
    int max_sum = INT_MIN;


     int arr[n];
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }
     for (int i = 0; i < n; i++)
     {
         for (int j = i; j < n; j++)
         {
            int sum = 0;
             for (int k = i; k <=j; k++)
             {
                 sum+=arr[k];
                 //cout<<arr[k]<<" ";
             }
          //cout<<endl;
          max_sum = max(max_sum,sum);   
         }
         
     }
     cout<<max_sum;
     return 0;
}
*/

//my approach . of getting max sum of subarrays.
/*
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {   
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];
        }
        max_sum = max(max_sum,sum);
        
    }
    cout<<max_sum;
    return 0;
}
*/

//optimised approcach apna college. 
/*
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int currsum[n+1];
    currsum[0]=0;
      
    for (int i = 1; i <= n; i++)
    {
        currsum[i] = currsum[i-1]+arr[i-1];   
    }
    int maxSum = INT_MIN;
    for (int i = 1; i <=n; i++)
    {
       int sum = 0;
       for(int j = 0;j<i;j++){
           sum = currsum[i] - currsum[j];
           maxSum = max(sum,maxSum);
       }
    }
    
    cout<<maxSum;
    return 0;
}
*/

/*
//12:47 session 25. 
// kadane's Algorithm is used to find max sum subarray. 
// kadane's algorithm if curr sum becomes negative update it wiht 0
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int currsum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum<0){
            currsum = 0; 
        }
        max_sum = max(max_sum,currsum);
    }
    cout<<max_sum;
    
    
    
}
*/

/*
// video 25 timestamp 24:48
// Maximum Circular subarray sum
// calculte nonwrape sum and wrape sum choose max among both.  
int kadane(int arr[],int n){
    int currsum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if(currsum<0){
            currsum = 0;
        }
        max_sum = max(max_sum,currsum);
    }
    return max_sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr,n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum = arr[i];
        arr[i]= -arr[i];
    }
    wrapsum = totalsum + kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
return 0;
}
*/

/*
// pair sum problem check if sum of 2 elements in array equals to k . 
// On^2

bool pairsum(int arr[], int n, int k){

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
             if(arr[i]+arr[j]==k){
                 cout<<i<<" "<<j<<endl;
                 return true;
             }
        }
        
    }
    return false;
}
int main(){
    int arr[]={2,4,7,11,14,16,20,21};

    int k=31;
    cout<<pairsum(arr,8,k);
    return 0;
}
*/

/*
// more optimised approach time complexity is On
// sort an array maintain 2 pointers low ,high chech if sum of arr[low]+arr[high]==k return high low and true
// if sum of array of high low is less then k increment low becaes greater numbers are present to right in array so incrementing low will add greter numbner.
// if sum of array of high low is greter then k decrement high as we neeed lesser number to add in sum and array is sorted in ascending order form left to right so we will get less numbers towrard left. 

bool pairsum(int arr[], int n, int k){
  int low=0;
  int high = n-1;
  while (low<high){
      if(arr[high]+arr[low]==k){
          cout<<low<<" "<<high<<endl;
          return true;
      }
      else if (arr[low]+arr[high]>k){
          high -= 1;
      }
      else if (arr[low]+arr[high]<k){
          low += 1;
      }
  }
    return false;
}
int main(){
    int arr[]={2,4,7,11,14,16,20,21};

    int k=31;
    cout<<pairsum(arr,8,k);
    return 0;
}

*/ 

