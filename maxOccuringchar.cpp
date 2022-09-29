#include<bits/stdc++.h>
#include<iostream>

using namespace std;

char maxOccChar(string s){
    int arr[26];

    for(int i =0; i<s.length();i++){
        char ch = s[i];
        int number = 0;

        if(ch>='a' &&ch<= 'z'){
            number = ch - 'a';
        }else{
            number = ch - 'A';
        }
        arr[number++];
    }
    int maxi= -1 , ans =0;
    for(int i =0;i<s.length();i++){
        if(maxi < arr[i]){
            ans = i ;
            maxi = arr[i];
        }
    }

    char AnsArr = 'a' + ans;
    return 
    }

int main(){
    string s;
    cin>>s;

    cout<<maxOccChar(s)
    }