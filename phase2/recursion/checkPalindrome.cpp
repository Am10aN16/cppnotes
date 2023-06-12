#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int i, string &s){
    int j = s.length()-i-1;
//base case
if(i>j) return true;


if(s[i] != s[j]){
   return false;
}else {
    //recursive call
    j--;
    return checkPalindrome(i+1, s);
}
}
 
int main()
{
 string s = "abmba";
bool ans = checkPalindrome(0, s);

 if(ans == true){
    cout<<"Yes it is palindrome"<<endl;
 }else{
    cout<<"Its not a palindrome"<<endl;
 }
 
    return 0;
}