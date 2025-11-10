#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class SinglyLinkedList
{
private:
    Node *head;

public:
    SinglyLinkedList()
    {
        head = nullptr;
    }
    // When we destroy the object, we will free some memory spaces
    // Destructor vs Constructor
    ~SinglyLinkedList()
    {
        while (head)
        {
            Node *temp = head;
            // move to next node
            head = head->next;
            // free the memory spaces
            delete temp;
        }
    }
    void insertFront(int value){
        Node* newNode = new Node(value); 
        // reassign head to be the new node 
        newNode->next = head; 
        head = newNode; 
    }
    void insertEnd(int value)
    {
        // 1. Check if the node is empty , then the first node become head
        Node *newNode = new Node(value);
        if (!head)
        {
            head = newNode;
            return;
        }
        // 2. If there are existing node already
        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        // insert the new node at the end of the list
        temp->next = newNode;
    }
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void deleteItem(int value ){
        //1. if it's empty , simply return 
        if(!head)return; 
        //2. if the deletion is on head of list 
        if(head->data == value ){
            Node* temp = head; 
            head = head-> next; 
            delete temp; 
            return; 
        }

         
        //3. delete element beside head 
        // 3.1 skip element != value 
        Node* current = head; 
        while(current->next && current->next->data != value ){
            current = current-> next; 
        }
        
        if(current != nullptr ){
            Node* temp = current->next; 
            // move the next position to next position 
            current-> next = current->next->next; 
            delete temp; 

        }
    }

};

int main()
{
    system("clear");
    SinglyLinkedList list;
    list.insertEnd(40);
    list.insertEnd(60);
    list.insertEnd(70);
    list.insertFront(90); 
    list.insertFront(88); 

    list.deleteItem(70); 
    cout << "Printing all values of the list : " << endl;
    list.display();
    return 0;
}