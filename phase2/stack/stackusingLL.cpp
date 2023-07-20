#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int val;
    Stack *next;

    Stack(int val)
    {
        this->val = val;
        this->next = NULL;
    }

    void push(int d, Stack *&head, Stack *&tail)
    {
        Stack *newNode = new Stack(d);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop(Stack *&head, Stack *&tail)
    {
        if (head == NULL)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            if (head == tail)
            {
                head = NULL;
                return;
            }

            Stack *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
        }
    }

    int peek(Stack *&tail)
    {
        if (tail == NULL)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return tail->val;
        }
    }

    bool empty(Stack *&head)
    {
        if (head == NULL)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{

    return 0;
}