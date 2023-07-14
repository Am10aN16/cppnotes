#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor for a node
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor for a node
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data: " << value << endl;
    }
};

void splitCircularList(Node *head){
    // Write your code here.
    Node *slow = head;
    Node *fast = head;
    Node *head1 = NULL;
    Node *head2 = NULL;

    while (fast->next != head && fast->next->next != head)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    if (fast->next->next == head)
    {
        fast = fast->next;
    }

    head1 = head;

    // Set the head pointer of second half
    if (head->next != head)
    {
        head2 = slow->next;
    }

    // Make second half circular
    fast->next = slow->next;

    // Make first half circular
    slow->next = head;
}

int main()
{

 
 
 
    return 0;
}