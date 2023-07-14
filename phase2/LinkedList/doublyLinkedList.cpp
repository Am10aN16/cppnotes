#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int val = this->data;
        if(next !=NULL){
            delete next;
            next =NULL;
        }
        cout<<"Memory free with data: "<<val<<endl;
    }
};

// travesing the linkedlist
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// getting the length     
int getLength(Node *head)
{
    Node *temp = head;
    int len = 0;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int d)
{

    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int d)
{
    if(tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head,tail, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(head,tail, d);
            return;
    }

    // creating a node
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node* &head, Node* &tail){

    //deleting first node or start node
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        //memory free start node
        delete temp;
    }else{
        //deleting any middle or last node
         Node* curr = head;
         Node* prev = NULL;

         int cnt =1;
         while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
         }
           if(curr->next == NULL){
            tail = prev;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
         delete curr;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head,tail, 12);
    print(head);
    insertAtHead(head,tail, 11);
    print(head);
    insertAtHead(head,tail, 9);
    print(head);

    insertAtTail(head,tail, 19);
    print(head);
    insertAtTail(head,tail, 22);
    print(head);

    insertAtPosition(head, tail, 2, 100);
    print(head);
    insertAtPosition(head, tail, 1, 100);
    print(head);
    insertAtPosition(head, tail, 8, 420);
    print(head);

    deleteNode(8, head,tail);
    print(head);
    cout<<"Head:"<<head->data<<endl;
    cout<<"Tail:"<<tail->data<<endl;
    return 0;
}