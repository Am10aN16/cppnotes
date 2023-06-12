#include<bits/stdc++.h>
using namespace std;

void reverseStr(int i,int j, string &s){
    if(i>j) return;

    swap(s[i] ,s[j]);
    i++;
    j--;
    reverseStr(i, j, s);
}

int main()
{
string s ="abcde";
int i = 0;
int j = s.length()-1;
reverseStr(i,j,s);
 
 cout<<"Reverse sting:"<< s<<endl;
    return 0;
}