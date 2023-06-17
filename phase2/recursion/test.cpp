#include<bits/stdc++.h>
using namespace std;

// long long contributions(int n, vector<int> &a){
//     long long ans = 0;
//     for(int i=0;i<n;i++){
//         for(int j =0;j<n;j++){
//             if(a[i]%3 == a[j]%3){
//                 ans += a[i]^a[j];
//             }
//         }
//     }
//     return ans;
// }
 
 long long superMovement(int n , vector<int> &a,int k){
    long long ans =0;
    long long count =0;

    while(count<=n){
        for(int i=0;i<n-1;i++){
            if(a[i]%k==0){
                ans+=0;
                count++;
            }
            if(a[i]%k>0){
                ans = abs(a[i]-a[i+1]);
                count++;
            }
    }
    }

  return ans;
 }


int main()
{
int N =4;
vector<int> v = {3,6,5,11};
// int ans = contributions(N,v);
 
 
 
    return 0;
}