#include <bits/stdc++.h>
using namespace std; 

class Node{
    public:
    int data; 
    Node * next; 

    Node (int data){
        this -> data = data; 
        this -> next = NULL;

    }

    ~Node(){
        int value = this -> data; 
        
        if(this -> next != NULL){
            delete next;
            this -> next  = NULL; 
        }
        cout<<"The deleted Node is "<<value<<endl; 
    }
};

// Insert At Head 
void insertAthead(Node * &head, Node * &tail, int d){
    if(head ==  NULL){
       Node * temp =new  Node(d);
        head  = temp; 
        tail = temp; 
        return;
    }
    else{
        Node * temp  = new Node(d);
        temp -> next = head; 
        head = temp; 
    }
}
void insertAtEnd(Node * &head, Node * &tail, int d){
    if(tail == NULL){
        Node * temp  = new Node(d);
        head = temp; 
        tail = temp;  
        return; 
    }
    else{
        Node * temp = new Node(d);
        
        tail -> next = temp; 
        temp -> next = NULL; 
        tail = temp; 
    }
}

// Insert At Specefic Position 

void insertAtPosition(Node * &head, Node * &tail ,int position, int d){
    if(position == 1){
        insertAthead(head,tail,d);
    }
    else{
        int count = 1; 
        Node * temp = new Node(d);
        Node * ptr = head; 

        while(count < position - 1){
            ptr = ptr -> next; 
            count++; 
        }
        if(ptr == tail){
            insertAtEnd(head, tail, d);
            return; 
        }
        
        temp -> next = ptr -> next; 
        ptr -> next = temp; 
    }
}
// Deletion  of linked list 
void deleteNode(Node * &head, Node * &tail, int postion){
    if(postion == 1){
        Node * temp = head; 
        head =  head -> next; 
        temp -> next = NULL;
        delete temp; 
    }
    else{
        Node * prev = NULL; 
        Node * curr = head; 
        int count = 0; 
        while(count < postion - 1){
            prev = curr; 
            curr = curr -> next; 
            count++; 
        }
        if(curr == tail){
            tail = prev;
        }
        prev -> next = curr -> next; 
        curr -> next = NULL; 
        delete curr; 
    }
}

// Using A print Function
void print(Node * head){

    Node * temp = head; 
    while(temp != NULL){
        cout<< temp -> data <<" "; 
        temp = temp -> next; 
    }
    cout<<endl;
}


int main()
{
    Node* head = NULL; 
    Node* tail = NULL;

    insertAthead(head, tail , 2);
    print(head);
    // cout<<"head:-"<<head -> data <<endl; 
    // cout<<"tail:-"<<tail -> data <<endl; 
    insertAtEnd(head, tail, 5);
    print(head);
    // cout<<"head:-"<<head -> data <<endl; 
    // cout<<"tail:-"<<tail -> data <<endl; 
    insertAtPosition(head, tail, 1, 1);
    print(head);
    insertAtPosition(head, tail,3, 4);
    print(head);
    insertAtPosition(head, tail, 5, 6);
    print(head);
    deleteNode(head,tail,  3);
    print(head);
    cout<<"head:-"<<head -> data <<endl; 
    cout<<"tail:-"<<tail -> data <<endl; 
     
return 0;
}