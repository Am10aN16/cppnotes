#include <bits/stdc++.h>
#include <string>
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool isReduntant = true;
                while (st.top() != '(')
                {
                    char top = st.top();

                    if (top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isReduntant = false;
                    }
                    st.pop();
                }
                if (isReduntant == true)
                    return true;
                st.pop();
            }
        }
    }
    return false;
}
