#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
class Queue
{
    int *arr;
    int size;
    int qfront;
    int rear;

public:
    Queue()
    {
        // Implement the Constructor
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        if (qfront == rear)
            return true;
        else
            return false;
    }

    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        int ans = arr[qfront];
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            arr[qfront] = 1;
            qfront++;
            return ans;
        }
    }

    int front()
    {
        if (qfront == rear)
            return -1;
        else
            return arr[qfront];
    }
};

int main()
{

    return 0;
}