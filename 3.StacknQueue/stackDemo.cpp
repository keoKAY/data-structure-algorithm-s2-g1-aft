#include<iostream>
#include<stack> // built-in 
using namespace std; 

void printStack(stack<int> num ){
    while(!num.empty()){
        cout<<" "<<num.top(); 
        num.pop(); 
    }
    cout<<endl; 
}
int main(){
    system("clear"); 

    stack<int> stackNum; 

    // init values ( 10,20 , 30 , 40, 50 )
    for(int i = 1; i<=5; i++){
        stackNum.push(i*10); 
    }

    stackNum.pop(); // remove the top element 
    cout<<"Current top is : "<<stackNum.top()<<endl; 
    printStack(stackNum); 
    return 0; 
}