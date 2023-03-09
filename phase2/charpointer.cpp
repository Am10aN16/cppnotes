#include<iostream>
using namespace std;

int main(){

int arr[5] = {1,2,3,4,5};
char ch[6] = "abcde";

//  cout<<arr<<endl;
//  cout<<ch<<endl;

int *p = &arr[0];
 char *c = &ch[0];
 //print only first address
 cout<<p<<endl; 
 //print whole array elements
 cout<<c<<endl; 

    return 0;
}