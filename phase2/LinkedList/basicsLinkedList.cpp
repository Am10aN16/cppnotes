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

//destructor for a node
~Node(){
    int value =  this->data;
    if(this->next != NULL){
        delete next;
        this->next = NULL;
    }
    cout<<"Memory is free for node with data: "<<value<<endl;
}

};

//Insert at Start

void InsertAtHead(Node* &head,  int d){
//create new node
Node* temp = new Node(d);
temp->next = head;
head = temp;
}

//Insert at ENd
void InsertAtTail(Node* &tail,int d){
   //create new node
Node* temp = new Node(d); 
tail->next = temp;
tail = temp;
}

//Insert at Particular Position
void InsertAtPosition(Node* &head,Node* &tail, int position , int d){

    if(position == 1 ){
        InsertAtHead(head ,d);
        return;
    }
    

    Node* temp = head;
    int cnt =1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

     //inserting at last position
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return;
    }

    //creating a node
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

   
}

//Deleting a Node
void deleteNode(int position, Node* &head, Node* &tail){

    //deleting first node or start node
    if(position == 1){
        Node* temp = head;
        head = head->next;
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
         prev->next = curr->next;
         curr->next = NULL;
         delete curr;
    }
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

InsertAtPosition(head, tail, 4, 22);
print(head);

cout<<"Head: "<<head->data<<endl;
cout<<"Tail: "<<tail->data<<endl;

deleteNode(2, head,tail);
print(head);

cout<<"Head: "<<head->data<<endl;
cout<<"Tail: "<<tail->data<<endl;
 
    return 0;
}