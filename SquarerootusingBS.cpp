#include<iostream>
using namespace std;

   long long int sqrtInt(int n){
        int s =0 ;
        int e = n;
       long long int mid = s + (e-s)/2;
       long long int ans = -1;
        
        while(s<=e){
           long long int sqre = mid * mid;
            
            if(sqre == n)
                return mid;
            
            if(sqre < n){
                ans = mid;
                s =mid + 1;
            }else{
                e = mid -1 ; 
            }
             mid = s + (e-s)/2;
            
        }
        return ans;
    };

    double morePrecision(int n , int precision , int tempSol){

        double factor = 1;
        double ans = tempSol;

        for(int i =0 ; i< precision ; i++){
            factor = factor/10;

            for(double j = ans ; j*j < n ; j+=factor){
                ans = j;
            }
        }
        return ans;

    };

    int main(){
        int n;
        cout<<"Enter the value of n:-"<<endl;
        cin>>n;

        int tempSol = sqrtInt(n);
        cout<<"Answer is:- "<< morePrecision(n , 3 ,tempSol)<<endl;
    }