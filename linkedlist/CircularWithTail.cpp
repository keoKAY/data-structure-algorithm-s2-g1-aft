#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data; 
    Node* next; 
    Node(int val ){
        data = val; 
        next = nullptr; 
    }
}; 

class CL{
    private: 
        Node* head; 
        Node* tail; 
    public: 
        CL(){
            head = tail =nullptr; 
        }

        ~CL(){

            if(!head) return; 
            // Delete the single node here 


            Node* current = head->next; 
            while(current!=head){
                Node* temp = current; 
                current = current->next; 
                delete temp; 
                cout<<"\t Delete Node ✅ "<<endl;    
            }

            delete head; 
            head=tail=nullptr; 
            cout<<"\t Delete head ✅"<<endl; 

        }
        void insertEnd(int val ){
            Node* node = new Node(val);
            if(head == nullptr){
                head=tail=node; 
                tail->next  = head; 
                return ; 
            }

            tail->next = node; 
            tail = node; 
            tail->next = head;  // make it circular 
        }
        void insertFront(int val ){
            Node* node = new Node(val);
            if(head == nullptr){
                head=tail=node; 
                tail->next  = head; // circular here 
                return ; 
            }

            node->next = head; 
            head = node; 
            tail->next = head;  // make it circular 
        }


        void display(){
            if(!head) return; 
            Node* temp = head; 
            do{
                cout<<temp->data<<"  "; 
                temp = temp->next;  
            }while(temp!=head); 
            cout<<endl; 
        }

    };


int main(){
    system("clear");
    CL circleList; 
    circleList.insertEnd(90); 
    circleList.insertEnd(100);
    circleList.insertFront(88);  
    circleList.display();
    return 0 ; 
}