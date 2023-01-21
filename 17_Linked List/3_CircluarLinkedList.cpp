#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;

        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "the Deleted node is " << value << endl;
    }
};

void insertAtHead(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        temp->next = temp;
    }
    else
    {
        Node *temp = new Node(data);
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *&tail, int element)
{
    if (tail == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        if(curr == prev){
            tail = NULL; 
        }
       else if (curr == tail)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
void print(Node * tail)
{
    if (tail == NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (tail != temp);
    cout << endl;
}

int main()
{
    Node *tail = NULL;

    insertAtHead(tail, 1, 5);
    print(tail);
    insertAtHead(tail, 5, 6);
    print(tail);
    insertAtHead(tail, 5, 2);
    print(tail);
    deleteNode(tail, 5);
    print(tail);
    return 0;
}