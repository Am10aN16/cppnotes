#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(11);
    cout << "front of Queue is: " << q.front() << endl;
    q.push(12);
    cout << "front of Queue is: " << q.front() << endl;
    q.push(13);
    cout << "front of Queue is: " << q.front() << endl;

    cout << "Size of the queue is:" << q.size() << endl;

    q.pop();
    cout << "front of Queue is: " << q.front() << endl;
    q.pop();
    cout << "front of Queue is: " << q.front() << endl;
    q.pop();
    cout << "front of Queue is: " << q.front() << endl;

    cout << "Size of the queue is:" << q.size() << endl;

    if (q.empty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }
    return 0;
}