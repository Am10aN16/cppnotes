#include<iostream>
using namespace std;

int main(){

//array declare
int arr[15];

//accessing the value of array at nth position
cout<< arr[14] << endl;

//initialization Array
int sec[3] = {5,7,11};

//accessing the value of array 
cout<< sec[2] << endl;

int third[15] = {2,7};

int n=15;

//printing the array
for (int i = 0; i < n; i++)
{
    cout<< third[i] << " ";
}

cout<< endl;

//initializing all terms with 0
int fourth[10] = {0};

int m=10;

//printing the array
for (int i = 0; i < m; i++)
{
    cout<< fourth[i] << " ";
}

return 0;

}