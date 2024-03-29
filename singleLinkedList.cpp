#include<bits/stdc++.h>
using namespace std;

// create the clss for Node
class Node{
    public:
    int val;
    Node* next;
    Node(int val)
    {
       this->val = val;
       this->next = NULL;
    }
};

class Node2{
    public:
    //create a node 
    Node2* prev;
    int val;
    Node2* next;

    Node2(int val)
    {
        this->prev = NULL;
        this->val=val;
        this->next=NULL;
    }
};

int inputVal()
{
    int val;
    cout<<"Enter value for node : ";
    cin>>val;

    return val;
}
// function to operations on linked list
Node* insertAtFirst(Node* head)
{
    
    Node* newnode = new Node(inputVal());

    newnode->next = head;
    head = newnode;

    return head;
}

Node* insertAtEnd(Node* head)
{
    Node* newnode = new Node(inputVal());
    Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->next = NULL;

    return head;
}



void print(Node* head)
{
    Node* temp = head;
    cout << "Nodes of list : ";
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

// It is all for doubly linked list
void print1(Node2* head)
{
    Node2* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
}
Node2* insertAtFirst1(Node2* head)
{
    Node2* newnode = new Node2(inputVal());

    head->prev    = newnode;
    newnode->next = head;
    head = newnode;

    return head;
}
int main()
{
    Node* head = new Node(5); // the pointers are create in heap only then we manualy to remove or delete

    int ch;

    while(ch)
    {
        cout<<"Enter your choice 1] insert at first 2] insert at end 3] insert using index 4] Print 5] delete at last 6] delete at using index : ";
        cin>>ch;

        if(ch == 1)
        {
            head = insertAtFirst(head);
        } else if(ch == 2) {
            insertAtEnd(head);
        } else if(ch == 3) {
            // insertAtIndex(head);
        } else if(ch == 4) {
            print(head);
        }
    }

    Node2 *head1 = new Node2(1);
    int st;
    while(st)
    {
        cout<<"Enter your choice 1] insert at first 2] insert at end 3] insert using index 4] Print 5] delete at last 6] delete at using index : ";
        cin>>st;

        if(st == 1)
        {
            head1 = insertAtFirst1(head1);
        } else if(st == 2) {
            // head1 = insertAtEnd1(head1);
        } else if(st == 3) {
            // insertAtIndex(head);
        } else if(st == 4) {
            print1(head1);
        }
    }
    return 0;
}