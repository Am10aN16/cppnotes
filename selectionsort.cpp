#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i =0 ; i< n-1 ; i++){
        int minIndex = i;
        for(int j = i+1; j< n ; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex] , arr[i]);
    }
}

int main(){
    vector<int>& arr = {4,2,1,7,9};

    cout<<selectionSort(arr , 5);
    return 0;
}