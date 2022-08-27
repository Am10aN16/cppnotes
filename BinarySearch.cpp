#include<iostream>
using namespace std;


int binarySearch(int arr[] , int size , int key){
int start = 0;
int end = size-1;
//find mid of the array
int mid = start +(end-start)/2;

    while (start <= end)
    {
        if(arr[mid]== key){
            return mid;
        };

        if(key > arr[mid]){
            start =mid+1;
        }else{
            end =mid-1;
        }
        mid = start +(end-start)/2; 
    };

return -1;

};


int main(){

int even[6]= {2,4,6,8,12,16};
int odd[5] = {3,4,6,7,9};


int evenIndex = binarySearch(even ,6 , 12);
cout<< "Index of 12 is " << evenIndex <<endl;

int oddIndex = binarySearch(odd ,5 , 4);
cout<< "Index of 4 is " << oddIndex <<endl;


return 0;
}