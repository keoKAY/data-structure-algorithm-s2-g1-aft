#include<bits/stdc++.h>
using namespace std; 

struct Node {
    int data; 
    Node* next; 
    Node(int val ){
        data = val; 
        next = nullptr; 
    }
}; 


class CircularLinkedList{
    private: 
        Node* head; 
    public: 
        CircularLinkedList(){
            head = nullptr; 
        }
        ~CircularLinkedList(){
            cout<<"Free memory address... ✅"
                <<endl; 
            if(!head) return ; 
            Node* current = head->next; 
            while(current!=head){
                cout<<"---> Item deleted..."<<endl; 
                Node * temp = current; 
                current = current->next; 
                delete temp; 
            }
            cout<<"---> Item deleted..."<<endl; 
            delete head; 
            head = nullptr; 

        }    
        void insertEnd(int val ){
            Node* newNode = new Node(val); 
            // if it's empty 
            if(!head){
                head=newNode; 
                //self-link 
                newNode->next = head; 
                return; 
            }
            // if it is not empty 
            Node* temp = head; 
            while(temp->next !=head){
                temp = temp->next; 
            }
            temp->next = newNode; 
            newNode->next = head; 
        }

        void display(){
            Node* temp = head; 
            do{
                cout<<" "<<temp->data; 
                temp =temp->next;  
            }while(temp != head); 
            cout<<endl; 
        }

}; 
int main(){
    system("clear");

    CircularLinkedList cl; 
    cl.insertEnd(10); 
    cl.insertEnd(20); 
    cl.insertEnd(30); 

    cout<<"All values of the circular linkedlist.."
        <<endl; 
    cl.display();
    return 0; 
}