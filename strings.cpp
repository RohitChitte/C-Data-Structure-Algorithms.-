// chracter arrays are static can't change size 
// strigs dynamic no need to know size before creation. and size can change. 
//  operations like append and update concatenation is easy in strings. 
// \0 is terminating character in strings 
// no terminating chracters in array. 
// terminatin chracter tells us end of sequenc.e

#include<iostream>
#include<string>  // to use inbulit functions on strings. 
#include<algorithm>  // sort function on strings is present in algorithm header file.
using namespace std;

int main(){

    // declaring strings. 
/*
    string str ;
    cin>>str;
    cout<<str;
*/

    /*
    string str(5,'R');
    cout<<str<<endl;
    cin.ignore();
    */

   /*
   string str = "ApniKaksha";
   cout<<str;
    */

   // to take input entire line with spaces we can use character array. 
   /*
    int n = 15;
    char arr[n+1];
    cin.getline(arr,n);
    cout<<arr;
    */
   // another way is using strings. 
    // using cin only will print 1st word only. 
    // use getline funtion to input entire line. 
    // se behaviour of getline wiht char array(above code) and strings(below code.). 
/*
   string str;
   getline(cin,str);
   cout<<str<<endl;
*/ 

// different functions in strings. 

/*
    string str ;
    string s1 = "fam";
    string s2 = "ily";

    // s2 will be appended in s1 string.
    s1.append(s2);
    cout<<s1<<endl;  

*/ 

// other way to append.without append funtion.

/*
string s1 = "fam";
string s2 = "ily";

cout<<s1+s2<<endl;

// accessing or slicing character. 
cout<<s1[1]<<endl;
    
string abc = "slfjslajf lsjflks jlk   f  ";
cout<<abc<<endl;
abc.clear();
cout<<"printing abc after using clear function "<<abc<<endl;
*/ 


/*
//comparing strings ,compare funciton does't compare length of strings but lexicographical comparison is done. 
string s1 = "abc";
string s2 = "xyz";
cout<<s2.compare(s1)<<endl;
cout<<s1.compare(s2)<<endl;

string s3 = "abc";
string s4 = "abc";
if (s3.compare(s4)==0){
    cout<<"strings are equal"<<endl;
}
*/

// epmty function to check if string is empty.

/*
string s1 = "abc";
cout<<s1<<endl;
s1.clear();

if (s1.empty()){
    cout<<"string is empyty"<<endl;
}

*/ 

// Erase function. erase(n,m) n is starting index to begine deletion. 
// m is number of characters to delete after n.. 
/*
string s1 = "nincompoop";

s1.erase(3,3);
cout<<s1<<endl;
*/ 

/*
string s1 = "nincompoop";

cout<<s1.find("com")<<endl; // find function give index from which sub string is starting. 
cout<<s1.find("poop")<<endl; // argument is just substring to find. 

*/


// insert function
string s1 = "nincompoop";
s1.insert(2,"LOL");  // inserting substring in string
// arguments are index from which to insert and substring.
cout<<s1<<endl;
cout<<"Length of string s1  using size function is : "<<s1.size()<<endl; 
cout<<"Length of string s1 using length function  is : "<<s1.length()<<endl;

for (int i = 0; i < s1.length(); i++)
{
    cout<<s1[i]<<endl;
}
// substr(n,m) n is starting index and m is number of characters after n. 
cout<<"using substr() function : "<<s1.substr(9,4)<<endl;

// conversion of numeric string to integer datatypye. 
/*
string s2 = "786";
int x = stoi(s2);
cout<<"Conversion of string to integer: "<<x+3<<endl;
cout<<"Conversion of integer to string: "<<to_string(x) + "3"<<endl;

// sorting is lexicographically i.e a will come 1st the b the accordingly. 
string s3 = "asldjfiuysifhjh";
// sort(m,n) m = starting iterator n = end iterator.
sort(s3.begin(),s3.end());
cout<<"Printing sorted string:"<<s3<<endl;
return 0;  
}
*/