#include<iostream>
using namespace std;

void printRowSum(int arr[][3] , int row ,int col){
    cout<<"Printing Sum row wise-->"<<endl;

   for(int row=0; row<3; row++){
    int sum=0;
        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }
    cout<<sum<<" ";
    }
    cout<<endl;
}
void printColSum(int arr[][3] , int row ,int col){
    cout<<"Printing Sum  col wise-->"<<endl;

   for(int col=0; col<3; col++){
    int sum=0;
        for(int row=0; row<3; row++){
            sum += arr[row][col];
        }
    cout<<sum<<" ";
    }
    cout<<endl;
}

int largestRowSum(int arr[][3] , int row ,int col){
    int maxi = INT_MIN;
    int index = -1;

      for(int row=0; row<3; row++){
    int sum=0;
        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }
    if(sum > maxi){
        maxi = sum;
        index = row;
    }
    }
    cout<<"The maximum row sum => "<<maxi<<endl;
   
    return index;
}

int main(){

    int arr[3][3];

    cout<<"Enter the element of array:- "<<endl;
    //taking input
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

 //printing
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

printRowSum(arr,3,3);

printColSum(arr,3,3);

int ans = largestRowSum(arr,3,3);
 cout<<"The row index is => "<<ans<<endl;
    return 0;
}

