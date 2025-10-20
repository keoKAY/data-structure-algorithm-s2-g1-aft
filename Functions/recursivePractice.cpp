#include<bits/stdc++.h>
using namespace std;
int sumArray(int n , vector<int> values ){
    if (n ==0 ) return values[0]; 
    return values[n] + sumArray(n -1 , values); 
}

// fibonacci sequences 
// 0, 1 , 1 , 2 ,3 ,5 ,8 , ... 
// count from 0 , 1 , 2 
int fib(int n ){
    if (n ==1 || n == 0 ) return n; 
    return  fib( n - 1 ) + fib(n-2);
}
int sumFib(int n ){
    if(n==0 ) return fib(0); 
    return fib(n) + sumFib(n-1);
} 
int main(){
    system("clear"); 
    vector<int> values =  {40,10,20,10,20}; 
    cout<<" 🍀 Result of sum is : "
        <<sumArray(values.size(),values )
        <<endl; 

    int n = 4; 
    cout<<" 🍀 Fibonacii of n ="<<fib(6)<<endl; 
    cout<<" 🍀 SUM Fibonacii of n ="<<sumFib(5)<<endl; 
    return 0 ; 
}