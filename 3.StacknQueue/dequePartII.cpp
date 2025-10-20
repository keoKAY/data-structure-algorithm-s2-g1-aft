#include<bits/stdc++.h>
using namespace std; 

// Write a function to get min and max 
int getMin(deque<int> values){
    auto min = values[0]; 
    for(const auto & val : values ){
        if(min>val) min = val; 
    }
    return min;
}
// Please implement getMax() by yourself!




int main(){
    system("clear"); 
    deque<int> dq; 
    // adding values to dq 
    for(int i = 1; i<=5; i++){
        dq.push_back(i*10); 
    }

    dq.push_front(9999); 
    // insert at any pos 
    dq.insert(dq.begin()+2,8888); 
    dq.erase(dq.begin()+2); 
    //dq.clear(); 

    cout<<"At the front: "<<dq.front()<<endl;  
    cout<<"At the back:  "<<dq.back()<<endl; 

    dq.pop_back(); // remove the element from the back

     
    cout<<"Getting the min value : "<<getMin(dq)<<endl; 
    
    cout<<"\n Print all element of deque: "<<endl; 
    for(const auto & val: dq ){
        cout<<val<<" "; 
    }
    cout<<endl; 

    cout<<"\n Print using iterator :"<<endl; 
    // utilizing pointers
    for( auto it= dq.begin(); it!=dq.end(); it++){
        cout<<*it<<" "; 
    }
    cout<<endl; 

    return 0; 
}