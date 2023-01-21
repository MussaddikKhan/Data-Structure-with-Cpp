#include <bits/stdc++.h>
using namespace std; 
class Node{
    public:
    int data; 
    Node * next; 
    Node * prev;

    // Construcotr
    Node(int d){
        this -> data = d;
        this -> next = NULL; 
        this -> prev = NULL; 
    }

    // Destructor
    ~Node(){
        int value = this -> data; 

        if(this -> next != NULL){
            delete next;
            this -> next = NULL; 
        }
        cout<<"Deleted node is "<<value<<endl; 
    }

};

//Inser At head ; 
void insertAtHead(Node * &head, Node * &tail, int data ){
    if(head == NULL){
        Node * temp = new Node(data);
        head = temp; 
        tail = temp; 
        temp -> prev = NULL; 
    }
    else{
        Node * temp = new Node(data);
        temp -> next = head; 
        head -> prev = temp; 
        head = temp;
    }
}

// Insert At End; 
void insertAtEnd(Node * &head, Node * &tail, int data){
    if(tail == NULL){
        Node * temp = new Node(data);
        head = temp;
        tail = temp;
        temp -> prev = NULL; 
    }
    else{
        Node * temp = new Node(data);
        tail -> next = temp; 
        temp -> prev = tail; 
        temp -> next = NULL;
        tail  = temp; 
    }

}

// Insert At Specefic Position 
void insertAtPosition(Node * &head, Node *&tail, int position, int data){
    if(position == 1){
        insertAtHead(head,tail,data);
        return; 
    }
    else{
        int count  = 1; 
        Node * temp = new Node(data);
        Node * curr = head;
        while(count < position - 1){
            curr =  curr -> next; 
            count++; 
        }
        if(curr == tail){
            insertAtEnd(head, tail , data);
            return; 
        }
        temp -> next = curr -> next;  
        curr -> next = temp;
        temp -> prev = curr; 
    }
}
 // Deletion of Linked List 
 void deleteNode(Node * &head, Node * &tail, int position){
    if(head == NULL && tail == NULL){
        cout<<"Linked list Is Empty"<<endl; 
        return;

    }
    if(position == 1){
        Node * temp = head; 
        temp -> next -> prev = NULL;  
        head = temp -> next;
        temp -> next  = NULL;
        delete temp; 
    }
    else{
        Node * curr = head; 
        Node * back = NULL;
        int count = 0; 

        while(count < position - 1)
        {
            back = curr; 
            curr = curr -> next; 
            count++; 
        }
        curr -> prev = NULL;
        back -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
        if(back -> next == NULL){
            tail = back;
        }
    }
 }

// Linked List Traversal 
void print(Node * head){
    Node * temp = head; 

    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next; 
    }
    cout<<endl; 
}

int main()
{
     Node * head = NULL; 
     Node * tail = NULL;

    insertAtHead(head, tail, 4);
    print(head);
    insertAtEnd(head, tail, 5);
    print(head);
    insertAtPosition(head, tail,1,3);
    print(head);
    deleteNode(head, tail, 3);
    print(head);
    cout<<"head:-"<<head -> data <<endl; 
    cout<<"tail:-"<<tail -> data <<endl; 
     
return 0;
}