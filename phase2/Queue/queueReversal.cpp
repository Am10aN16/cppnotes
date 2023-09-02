#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        stack<int> s;

        while (!q.empty())
        {
            int ele = q.front();
            q.pop();
            s.push(ele);
        }

        while (!s.empty())
        {
            int ele = s.top();
            s.pop();
            q.push(ele);
        }

        return q;
    }
};

int main()
{

    return 0;
}