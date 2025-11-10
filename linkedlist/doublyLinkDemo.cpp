#include<bits/stdc++.h>
using namespace std; 
struct Node{
    int data; 
    Node* next; 
    Node* prev; 
    Node(int val ){
        data = val; 
        next = nullptr; 
        prev = nullptr; 
    }
};

class DoublyLinkedList{
    private: 
        Node* head; 
    public:
        DoublyLinkedList(){
            head = nullptr; 
        }
        ~DoublyLinkedList(){
            cout<<"Free all addresses ✅"<<endl; 
            while(head){
                cout<<"----> Address deleted ✅"<<endl; 
                Node* temp = head; 
                head = head->next; 
                delete temp; 
            }
        }

        void insertEnd(int val ){
            Node* newNode = new Node (val );
            if(!head){
                head = newNode; 
                return; 
            }

            //2. if there are some nodes before
            Node* temp  = head; 
            while(temp->next ) temp=temp->next; 

            temp->next = newNode; 
            newNode->prev = temp; // linked back to the temp Node 
        }
        // from left to right 
        void printForward(){
            cout<<"[+] Print forward ➡️"<<endl; 
            Node* temp = head; 
            while(temp != nullptr){
                cout<<temp->data <<" -> "; 
                temp = temp->next; 
            }
            cout<<"NULL"<<endl; 
        }
        void printBackward(){
            cout<<"[+] Print backward ⬅️ "<<endl; 
            Node* temp = head; 
            while(temp->next ) temp = temp->next;
            cout<<" NULL "; 
            while(temp!=nullptr){
                cout<<" <- "<<temp->data; 
                temp = temp->prev; 
            }
            cout<<endl; 
        }
}; 
int main(){
    system("clear"); 
    DoublyLinkedList dl; 
    dl.insertEnd(10); 
    dl.insertEnd(20); 
    dl.insertEnd(30); 

    dl.printForward();
    dl.printBackward();

    return 0 ; 
}