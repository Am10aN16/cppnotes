#include<bits/stdc++.h>
using namespace std;

void sayDigit(int n, string arr[]){
    //base case
    if(n == 0) return;

    //processing
    int digit = n%10;
    n = n/10;

    //recursive call
    sayDigit(n, arr);

    //result print
    cout<<arr[digit]<<" ";
}

int main(){
    int num;
    cin>>num;
    string arr[10] = {"zero", "one","two", "three", "four", "five", "six", "seven", "eight", "nine"};

    sayDigit(num, arr);
   return 0;
    
}