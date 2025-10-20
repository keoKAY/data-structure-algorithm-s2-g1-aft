#include<bits/stdc++.h>
#include<stack>
using namespace std; 
int main(){
    system("clear"); 
    deque<int> dq; 
    // initialize 5 values to dq 
    for(int i = 1; i<=5;i++){
        dq.push_back(i*10); 
    }

    cout<<"Printing all element: "<<endl; 
    for( auto val : dq ){
        cout<<" "<<val; 
    }
    cout<<endl; 

    // Random Access 
    cout<<"Accesing 1st element dq[0]: "<<dq[0]<<endl; 
    cout<<"Accesing 3rd element dq[0]: "<<dq[2]<<endl; 
 
    cout<<"Size of our dq : "<<dq.size()<<endl; 
    dq.push_front(99); 
    dq.push_front(98);
    dq.push_back(111); 

    cout<<"Printing all element: "<<endl; 
    for( auto val : dq ){
        cout<<" "<<val; 
    }
    cout<<endl; 
    return 0; 
}