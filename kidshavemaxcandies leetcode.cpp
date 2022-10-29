class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int temp = 0;
        vector<bool> v;
        for(int i=0; i<candies.size(); i++){
         temp =  candies[i] + extraCandies;
            int maximum=*max_element(candies.begin(), candies.end());
            if(temp>=maximum)
                v.push_back(true);
            else v.push_back(false);
           
           }
        return v;
         }
        
  
};
