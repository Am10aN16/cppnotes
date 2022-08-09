#include<iostream>
using namespace std;


int maxEle(int arr[] , int n){
    int maxi = INT_MIN;
    for(int i =0; i<n;i++){
        //using in built max min
       maxi = max(maxi , arr[i]);

    }

    //returning max value
    return maxi;
}
int minEle(int arr[] , int n){
    int mini = INT_MAX;
    for(int i =0; i<n;i++){
       mini = min(mini , arr[i]);
         }

    //returning min value
    return mini;
}
// int maxEle(int arr[] , int n){
//     int max = INT_MIN;
//     for(int i =0; i<n;i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }

//     //returning max value
//     return max;
// }
// int minEle(int arr[] , int n){
//     int min = INT_MAX;
//     for(int i =0; i<n;i++){
//         if(arr[i] < min){
//             min = arr[i];
//         }
//     }

//     //returning min value
//     return min;
// }


int main() {

    int size;
    cin>>size;

    int num[100];

    //taking input in array
    for(int i =0;i<size;i++){
        cin>>num[i];
    }
  
  cout<< "Max element is: "<< maxEle(num , size) << endl;
  cout<< "Min element is: "<< minEle(num , size) << endl;

}