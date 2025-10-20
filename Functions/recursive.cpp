#include<bits/stdc++.h>

using namespace std; 

// define recursive func 
void greeting( ){
    cout<<"Hello World 👍"<<endl; 
    //  condition where when to stop 
    // if condition true , return to stop 
    return; 
    greeting(); 
}


// 1 , 2 ,3 , 4, ...., n 
int sum(int n ){
    // if n = 1, sum = 1 // => base case 
    if (n==1) return  1;  
    return n + sum(n -1 ); 
}
// sum(5) =  5 + 4 + 3 + 2 + 1
// sum(4) =  4 + 3 + 2 + 1
// sum(3) = 3 + 2 + 1
// sum(2) = 2 + 1 , but sum(1) =1 

int factorial(int n ){
    if ( n == 0 ) return 1 ; 
    return n * factorial(n  - 1);
}
int main(){
    system("clear"); 
    // 1 , 2 , 3 , 4 
    int n = 4; 
    cout<<"Result of sum : "<<sum(n )<<endl; 
    cout<<"Ressult of 4! ="<<factorial(4)<<endl; 
    return 0 ; 
}