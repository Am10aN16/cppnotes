#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

//constructor for a node
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void InsertAtHead(Node* &head,  int d){

//create new node
Node* temp = new Node(d);
temp->next = head;
head = temp;
}

void InsertAtTail(Node* &tail,int d){
   //create new node
Node* temp = new Node(d); 
 tail->next = temp;
tail = temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
        cout<<endl;
}

int main()
{
//created a new node
Node* node1 = new Node(10);

 
//head pointed to new node
Node* head= node1;
Node* tail= node1;
print(head);

InsertAtHead(head ,12);
cout<<"After"<<endl;
print(head);

InsertAtTail(tail ,15);
cout<<"After 2"<<endl;
print(head);
 
    return 0;
}