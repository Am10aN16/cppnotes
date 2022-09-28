#include<iostream>
using namespace std;

//checking for palindrome or not
bool checkPalindrome(char name[] , int n){
     int s=0;
     int e=n-1;

    while(s<e){
        if(name[s] != name[e]){
            return 0;
        }else{
            s++;
            e--;
        };
       
    }
     return 1;
}
//reversing the arr
void reverse(char arr[] ,int n){
    int s=0;
    int e= n-1;

    while(s<e){
        swap(arr[s++] , arr[e--]);
    }
}
//getting the length of the character array
int getLength(char arr[]){
    int count =0;
    for(int i=0; arr[i] != 0 ; i++){
        count++;
    }

    return count;
}

int main(){
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    name[2] = '\0';
    cout<<"Your name is:- "<<name<<endl;
    int len = getLength(name);
    cout<<"Length of your char array is:- "<< len <<endl;

    reverse(name, len);
    cout<<"Your name is:- "<<name<<endl;

    cout<<"Palindrome:- ";
    if (checkPalindrome(name , len)==1)
    {
       cout<<"Yes"<<endl;
    }else{
         cout<<"No"<<endl;
    }
    
   

    return 0;
}