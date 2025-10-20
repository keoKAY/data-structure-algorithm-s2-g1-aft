#include<bits/stdc++.h>
using namespace std; 

// write a function here in order to sum all the value of the array 
int sumArray(vector<int>& values , int n ){
   if(n ==0 ) return 0; 
   return values[n-1] + sumArray(values, n-1);
}

// sumArray(values, 0) = 0 
// sumArra(values,1 )  = values[0]+0;


void reverseString(string& values , int i =0 ){
    int n = values.size(); 
    // base-case 
    if( i >= n/2 ) return ; 
    // call func to continue the processed 
    swap( values[i], values[n-i-1]); 
    reverseString(values , i+1); 
}

int power(int a , int b ){
    if ( b == 0  ) return 1; 
    return a * power(a , b-1);
}
int main(){
    system("clear"); 
    vector<int> values = {20,30,40,10,20}; 
    cout<<"Result is : "
        <<sumArray(values, values.size()); 
    cout<<endl; 

    string message ="hello";
    cout<<"Message before reversed : "
        <<message<<endl; 
    reverseString(message); 
    cout<<"Message After reversed : "
        << message<<endl;  

    cout<<"Result of 2^3 : "<<power(2 , 3 )<<endl; 
    cout<<"Result of 9^2 : "<<power(9 , 2 )<<endl; 
    cout<<"Result of 10^2 : "<<power(10 , 2 )<<endl; 
    return 0 ; 
}