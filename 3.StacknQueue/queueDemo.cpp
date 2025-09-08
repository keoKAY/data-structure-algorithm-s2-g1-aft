#include<iostream>
#include<queue> 
using namespace std; 

int main(){
    system("clear"); 
    queue<int> qNum; 
    // 10,20,30,40,50
    for(int i = 1; i <=5; i++)
        qNum.push(i*10); 

    cout<<"Size before remove: "<<qNum.size()<<endl; 
    cout<<"Front is : "<<qNum.front()<<endl;
    cout<<"Removing : "
        <<qNum.front()<<endl; 
    qNum.pop(); 
    cout<<"Front is : "<<qNum.front()<<endl;

    cout<<"Back is : "<<qNum.back()<<endl; 
    cout<<"Size of our queue: "<<qNum.size()<<endl; 
    

    return 0 ; 
}