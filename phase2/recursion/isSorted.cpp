#include<bits/stdc++.h>
using namespace std;

// bool isSorted(int *arr, int size){
// //base case
// if(size == 0 || size == 1) return true;

// if(arr[0] > arr[1]) return false;
// else{
//     bool remain = isSorted(arr +1 ,size-1);
//     return remain;
// }
// }

int sum(int arr[],int size){
    
    if(size == 0) return 0;
   

  
   int summ = 0;
       summ = arr[0] + arr[1];
       

  int ans = sum( arr+1 ,size);
  return summ;
}


int main(){
    int arr[5] ={2,4,6,9,9};
    int size = 5;

    // bool ans = isSorted(arr, size);

    // if(ans){
    //     cout<<"Array is Sorted"<<endl;
    // }else{
    //     cout<<"Array is not sorted"<<endl;
    // }

    int answer = sum(arr, size);
    cout<<answer;
}