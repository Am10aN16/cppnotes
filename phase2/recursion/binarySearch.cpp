#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key){
     int mid = s+(e-s)/2;
    if(s>e) return false;
    if(arr[mid] == key) return true;
   

    if(arr[mid]< key){
       return binarySearch(arr, mid+1,e, key);
    }else{
        return binarySearch(arr, s,mid-1, key);
    }

   
}

int main(){

    int arr[6] = {1,3,9,10,12,18};
    int size = 6;
    int key = 3;
    int s = 0;
    int e = 5;
    cout<< "Found or Not: "<<binarySearch(arr, s,e, key)<<endl;
     
    return 0;
}