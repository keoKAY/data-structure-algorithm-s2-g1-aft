#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data; 
    Node* next; 
    Node(int val ){
        data = val; 
        next = nullptr; 
    }
} ; 

void printNode(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ->"; 
        head = head -> next; 
    }
    cout<<"NULL"<<endl; 
}
int main(){
    system("clear"); 
    Node* node1 = new Node(10); 
    Node* node2 = new Node(20); 
    Node* node3 = new Node(30); 
    // Link all the node
    node1->next = node2; 
    node2->next = node3; 
    node3->next = nullptr;  
    printNode(node1); 
    return 0; 
}