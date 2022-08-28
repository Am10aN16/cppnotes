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

int odd[5] = {1,2,3,3,5};
int even[6] = {2,4,4,4,4,8};



int oddfirst = firstOcc(odd ,5 , 3);
int oddlast = lastOcc(odd ,5 , 3);

int evenfirst =firstOcc(even ,6,4);
int evenlast =lastOcc(even ,6,4);

cout<< "First Index of 3 is " << oddfirst<<endl;
cout<< " last index of 3 is " << oddlast <<endl;


cout<< "First Index of 4 is " << evenfirst<<endl;
cout<< " last index of 4 is " << evenlast <<endl;

return 0;
}