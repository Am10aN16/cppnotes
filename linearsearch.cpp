#include <iostream>
using namespace std;


bool search(int arr[], int size , int key){

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            return 1;
        }
    }
    
    return 0;
}


int main(){

int arr[10] = {2,3,4,5,-6,22,33,54,2,1};

cout<<"enter the keyvalue you have to search: "<<endl;
int key;
cin>>key;

bool found = search(arr , 10 ,key);

if(found){
    cout<<"The keyvalue is present"<<endl;
}else{
     cout<<"The keyvalue is absent"<<endl;
}


}