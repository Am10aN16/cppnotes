#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[] , int n ){
    for(int i =1 ; i < n ; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[6] = {10,15,7,2,1,9};
    
    insertionSort(arr , 6);

    for(int i =0 ;i< 6; i++)
   {
    cout<<arr[i]<<",";
   }


    return 0;
}