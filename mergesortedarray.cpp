class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i =0 ;
        int j = 0;
        vector<int> ans;
        while(i<m && j<n){
           if(nums1[i]<nums2[j]){
               ans.push_back(nums1[i++]);
           }else{
                 ans.push_back(nums2[j++]);
           }
        };
        
        while(i<m){
            ans.push_back(nums1[i++]);
        };
        
          while(j<n){
            ans.push_back(nums2[j++]);
        };
     for(int k =0 ; k<m+n;k++){
         nums1[k] = ans[k];
     }
    }
};
