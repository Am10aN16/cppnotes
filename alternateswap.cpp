#include<iostream>
using namespace std;


void swapAlternate(int arr[], int n){
// if(n%2==0){
// for (int i = 0; i < n; i+=2)
// {
//    swap(arr[i], arr[i+1]);
// }}else{
// for (int i = 0; i < n-1; i+=2)
// {
//    swap(arr[i], arr[i+1]);
// }
// }

for (int i = 0; i < n; i+=2)
{
    if(i+1 < n){
        swap(arr[i],arr[i+1]);
    }
}


};

void printArr(int arr[] , int n){

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<' ';
    }
    cout<< endl;
};


int main(){
 int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};
 int brr[12] = {1,2,3,4,5,6,7,8,9,10,11,12};

swapAlternate(arr , 11);
swapAlternate(brr , 12);

 printArr(arr, 11);
 printArr(brr, 12);
}