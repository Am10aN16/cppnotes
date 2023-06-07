#include<iostream>
using namespace std;

void reachHome(int src , int dest){
    cout<<"Source"<<src<<", "<<"Destination"<<dest<<endl;
    //base case
    if(src == dest){
        cout<<"Reached Home"<<endl;
        return ;
    }
     //recursive call
     reachHome(src+1 , dest);
}

int main(){

    int src =1;
    int dest = 10;

    reachHome(src, dest);

    return 0;
}