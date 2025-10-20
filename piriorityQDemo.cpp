#include<bits/stdc++.h>
using namespace std; 

int main(){
    system("clear"); 
//    priority_queue <int> pq; 
    priority_queue<int, vector<int> , greater<int>> pq; 
    pq.push(90); 
    pq.push(30); 
    pq.push(100); 
    pq.push(5);

    cout<<"\n Printing all elements: "<<endl; 
    while(!pq.empty()){
        cout<<" "<<pq.top(); 
        pq.pop();
    }
    cout<<endl; 
    return 0; 
}