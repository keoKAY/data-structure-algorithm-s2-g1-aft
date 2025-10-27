#include<bits/stdc++.h>
using namespace std; 

class Worker{
    private: 
        int id; 
        string name;
        string gender;  
    public:
        Worker(){} 
        Worker(int id , string name , string gender){
            this-> id = id ; 
            this-> name = name;
            this-> gender = gender;  
        }
        void display(){
            cout<<"ID = "<<id<<endl; 
            cout<<"Name = "<<name<<endl;
            cout<<"Gender: "<<gender<<endl;  
        }
}; 

struct Node{
    Worker data; // int data ;  
    Node* next; 

    Node(Worker worker ){
         data = worker; 
        next  = nullptr; 
    }
}; 

void printNodes(Node* head ){
    Node* temp = head; 
    while(temp!=nullptr ){
        temp-> data.display();
        temp = temp-> next;  
        cout<<endl; 
    }
    cout<<endl; 
}
int main(){

    system("clear"); 
    Worker worker1=Worker(1001,"James","male");
    Worker worker2=Worker(1002,"pisey","female");
    // Create and add value 
    Node* node1 = new Node(worker1); 
    Node* node2  = new Node(worker2);
     
    //Link the nodes together 
    node1-> next = node2; 
    node2 -> next = nullptr;
    cout<<"These are the worker information : "<<endl;  
    printNodes(node1); 
    return 0 ; 
}