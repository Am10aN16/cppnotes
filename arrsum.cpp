#include<iostream>
using namespace std;

int arrSum(int arr[], int n){
    int sum =0;

    for(int i =0; i< n;i++){
        sum +=arr[i];
    }
    return sum;
}

int main(){
int arr[5] = {2,3,14,5,6};

cout<<arrSum(arr , 5);





}