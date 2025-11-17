#include<bits/stdc++.h>
using namespace std; 

struct Node{
        int data; 
        Node* next; 
    // Constructor used here to create instance esily 
        Node(int val ){
            data = val; 
            next=nullptr; 
        }
    }; 
// CL = Circular LinkedList 
class CL{
    private: 
        Node* head; 
    public: 
        CL(){
            head = nullptr;
        }
        ~CL(){
            // Free allocated space 
            if(!head) return; 
            cout<<"Deallocation memory address of CL ✅"
                <<endl; 
            if(head->next == head){
                cout<<"\tDelete sigle node ✅"<<endl; 
                delete head;
                return; 
            }

            Node* current = head->next; 
            while(current != head ){
                Node* temp = current; 
                current = current->next; 
                delete temp; 
                cout<<"\tDelete node successfully ✅"<<endl; 
            }
            delete head; 
            cout<<"\tDeleted the head node ✅"<<endl; 
        }


        void insertEnd(int val){
            // create node 
            Node* newNode = new Node(val); 
            if(head == nullptr){
                head = newNode; 
                newNode->next = head; //self-link 
                return; 
            }             
            Node* temp = head; 
            while(temp->next!=head){
                temp = temp->next; 
            }

            temp->next = newNode; 
            newNode->next = head; // link to head to make it circular 

        }
        void insertFront(int val ){
            Node*  newNode = new Node(val );
            if(head == nullptr){
                head = newNode; 
                newNode->next = head; 
                return; 
            }
            // Move to the last node that point to head
            Node* temp = head; 
            while(temp->next != head) temp = temp->next; 
    
            // temp is the last node 
            newNode->next = head; // link newNode to head node 
            temp->next = newNode; 
            head = newNode; 

        }
        void display(){
            cout<<"[+] Print all the values "<<endl; 
            if(head == nullptr){
                cout<<"List is empty! ❌"
                    <<endl; 
                    return; 
            }
            Node* temp = head; 
            do{
                cout<<" "<<temp->data; 
                temp = temp->next; 
            }while(temp!=head); 
            cout<<endl; 
        }
}; 

int main(){
    system("clear"); 
    CL cList; 
    cList.insertEnd(10); 
     cList.insertEnd(20);
     cList.insertEnd(30); 
     cList.insertFront(99);
     cList.display(); 

    return 0 ;
}