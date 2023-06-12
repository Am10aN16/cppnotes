#include<bits/stdc++.h>
using namespace std;

bool searchArr(int *arr, int size, int key){
    if(size == 0) return false;
    if(arr[0] == key) {
        return true;
        }else {
            bool remainPart = searchArr(arr+1, size-1,key);
            return remainPart;
    }
}

int main(){

    int arr[5] = {1,3,9,2,5};
    int size =5;
    int key =6;

    bool ans = searchArr(arr, size,key);
    if(ans ){
        cout<<"key is Present";
    }else{
        cout<<"Key is absent";
    }
    return 0;
}