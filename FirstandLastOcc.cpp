#include<iostream>
using namespace std;


int firstOcc(int arr[] , int n , int k){
int start = 0;
int end = n-1;
int ans = -1;
//find mid of the array
int mid = start +(end-start)/2;

    while (start <= end)
    {
        if(arr[mid]== k){
            ans = mid; 
            end =mid-1;
        }
        else if(k > arr[mid]){
            start =mid+1;
        }
        else if(k < arr[mid]){
            end =mid-1;
        }
        mid = start +(end-start)/2; 
    };

return ans;

};

int lastOcc(int arr[] , int n , int k){
int start = 0;
int end = n-1;
int ans =-1;
//find mid of the array
int mid = start +(end-start)/2;

    while (start <= end)
    {
        if(arr[mid]== k){
            ans = mid;
            start =mid+1;
        }
        else if(k > arr[mid]){
            start =mid+1;
        }
        else if(k < arr[mid]){
            end =mid-1;
        }
        mid = start +(end-start)/2; 
    };

return ans;

};


int main(){

int odd[6] = {1,2,3,3,3,5};



int first = firstOcc(odd ,6 , 3);
int last = lastOcc(odd ,6 , 3);
cout<< "Index of 4 is " << first<<endl;
cout<< "Index of 4 is " << last <<endl;


return 0;
}