#include<bits/stdc++.h>
using namespace std;

void sortArr(int *arr, int size){
    //base case
    if(size == 0 || size == 1) return;

    //solve one case- largest element ko last me rkh diye
    for(int i =0;i< size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    //recursive call
    sortArr(arr, size-1);
}
 
int main()
{
 int arr[5] = {2,5,1,6,9};

 sortArr(arr, 5);
 
 for(int i =0;i<5;i++){
    cout<<arr[i]<<" ";
 }
 
    return 0;
}