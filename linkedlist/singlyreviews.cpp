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

class SinglyLinkedList{
    private: 
        Node* head; 
    public: 
        //1. constructor -> construct/create
        SinglyLinkedList(){
            head = nullptr; 
        }
        //2. destructor -> destroy 
        void clear(){
            cout<<"Free memory .... ✅"
                <<endl; 
            while(head!=nullptr){
                Node* temp = head; 
                head = head -> next; 
                delete temp; 
            }
        }
        ~SinglyLinkedList(){
            clear(); 
        }

        void insertEnd(int val ) {
            // Create node first 
            Node* newNode = new Node(val); 
            if(!head){
                head = newNode; 
                return ; 
            }
            // newNode added behind other node 
            Node* temp = head; 
            while(temp->next ){
                temp = temp->next; 
            }
            temp->next = newNode; 
        }

        void printNodes(){
            while(head!=nullptr){
                cout<<head->data<<" -> "; 
                head = head->next; 
            }
            cout<<"NULL"<<endl; 
        }

        void deleteNode(int val ){
            if(head==nullptr) return; 
            if(val == head->data ){
                Node* temp = head; 
                head = head -> next; 
                delete temp ; 
                return; 
            }

            // delete node that are not the head node
            Node* current =head;
            while(current->next && current->next->data != val ){
                current = current-> next; 
            }
            
            if(current->next){
                // temp is the node we about to delete 
                Node* temp = current->next; 
                current->next = current->next->next; 
                delete temp; 
            }
        }
}; 

int main(){
    system("clear"); 
    SinglyLinkedList sl; 
    sl.insertEnd(10); 
    sl.insertEnd(20); 
    sl.insertEnd(30); 

    // sl.deleteNode(20); 
   
    sl.printNodes(); 

    return 0; 
}