#include<bits/stdc++.h>
using namespace std; 

void displayNum(stack<int> numbers){
    while(!numbers.empty())
    {
        cout<<numbers.top()<<" "; 
        numbers.pop(); 
    }
    cout<<endl; 
}

int peek(stack<int> numbers, int pos ){
    if(pos <=0 || pos > numbers.size()){
     throw runtime_error(" 🔥 invalid position"); 
    }
    for(int i = 1; i<pos; i++){
        numbers.pop(); 
    }
    return numbers.top();
}

bool searchStack(stack<int> numbers , int item ) {
    while(!numbers.empty()){
        if(numbers.top()== item ) return true; 
        numbers.pop();
    }
    return false ; // meaning not found 
}

void reverse(stack<int>& numbers ){
    stack<int> temp; 
    while(!numbers.empty()){
        temp.push(numbers.top()); 
        numbers.pop(); 
    }
    // swap back 
    numbers.swap(temp); 
}
int main(){
    system("clear"); 
    stack<int> numbers; 

    // 10,20, 30, ...
    for(int i = 1; i<=10;i++)
    numbers.push(i*10); 

    cout<<"Printing all values of stack: "<<endl; 
    displayNum(numbers); 


    cout<<"=> Accessing value Peek(3): "<<endl; 
    cout<<peek(numbers,3)<<endl;  
    cout<<"=> Accessing value Peek(4): "<<endl; 
    cout<<peek(numbers,4)<<endl;  


    int item = 101; 
    cout<<"Searching: "<<item
        <<(searchStack(numbers,item)?
            " ✅ Found it!"
            : " ❌ Not Found ")
        <<endl; 

    reverse(numbers); 
    displayNum(numbers);
    return 0; //  status code 
}