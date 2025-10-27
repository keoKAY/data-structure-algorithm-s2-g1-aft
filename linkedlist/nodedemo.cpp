#include<bits/stdc++.h>
using namespace std; 

struct Node{
    int data; 
    Node* next; 

}; 

void printList(Node* head ){
    Node* temp = head; 
    while(temp!=nullptr){
        cout<<temp->data<<" -> "; 
        temp = temp-> next; 
    }
    cout<<"NULL"<<endl; 
}
int main(){
    system("clear"); 
    Node* node1 = new Node(); 
    Node* node2 = new Node(); 
    Node* node3 = new Node(); 

    // Assign value for each node 
    node1 -> data = 10; 
    node2 -> data = 20; 
    node3 -> data = 30 ; 
    
    // link all nodes 
    node1->next = node2; 
    node2->next = node3; 
    node3->next = nullptr; 

    printList(node1); 
    return 0 ; 
}