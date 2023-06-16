#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
vector<vector<long long>> Ncr;
long long mod = 1e9 + 7;
long long ways(vector<int>& nums,int n){
    if(n<=2) return 1;
    vector<int> left,right;
    for(int i=1;i<n;i++){
        if(nums[0]>nums[i])
        left.push_back(nums[i]);
        else right.push_back(nums[i]);
    }
    long long ans_left = ways(left, left.size());
    long long ans_right = ways(right, right.size());

    long long ans = (((Ncr[n-1][left.size()]*ans_left)%mod)*ans_right)%mod;
    return ans;
    
}
    int numOfWays(vector<int>& nums) {
        int n = nums.size();
        Ncr.resize(n+1);
                
        for(int i = 0; i<n+1;++i){
                Ncr[i] = vector<long long>(i+1, 1);
                for(int j =1;j<i;++j){
                    Ncr[i][j] = (Ncr[i-1][j-1] + Ncr[i-1][j]) % mod;
                }
        }
        return (ways(nums,n)-1)%mod;
    }
    };
//Leetcode problem 1569