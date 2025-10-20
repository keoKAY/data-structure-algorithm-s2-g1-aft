#include<bits/stdc++.h>
using namespace std; 

// SC=O(n)
void display(stack<int> values ){
    while(!values.empty()){
        cout<<" "<<values.top(); 
        values.pop();
    }
    cout<<endl; 
}


// TC = O(n^2)
// SC = O(n)
void sortStack(stack<int>& values ){
    stack<int> temp ; 
    while(!values.empty()){
        int current = values.top(); 
        values.pop(); 
        while(!temp.empty() && temp.top() > current ){
            values.push(temp.top()); 
            temp.pop();
        }
        temp.push(current); 
    }
    values.swap(temp); // swap sorted value to original stack 
}

int getMinStack(stack<int> values){
    // handle if it's empty , we will show error message
    int mn = values.top(); 
    values.pop();
    while(!values.empty()){
        mn = min(mn , values.top()); 
        values.pop(); 
    }
    return mn; 
}
int getMaxStack(stack<int> values){
    // handle if it's empty , we will show error message
    int mx = values.top(); 
    values.pop();
    while(!values.empty()){
        mx = max(mx , values.top()); 
        values.pop(); 
    }
    return mx; 
}
int main(){
    system("clear"); 
    stack<int> values; 
    // TODO:  n , randomize algorithm for assigning random values 
    values.push(40); 
    values.push(10); 
    values.push(70); 
    values.push(20); 
    display(values); 
    sortStack(values); 
    cout<<"\n Stack values after sorted : "<<endl; 
    display(values); 

    cout<<"\n Min of the stack is : "<<getMinStack(values)<<endl; 
    cout<<"\n Max of the stack is : "<<getMaxStack(values)<<endl; 
    return 0 ; 

}