#include<bits/stdc++.h>
using namespace std;

int getSum(int *arr,int size){
    if(size==0) return 0;
    if(size==1) return arr[0];

    int remainPart = getSum(arr+1, size-1);
    int ans = arr[0]+ remainPart;
    return ans;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int size =5 ;
    int sum = getSum(arr, size);
    cout<<"Sum is:"<<sum<<endl;
    return 0;
}