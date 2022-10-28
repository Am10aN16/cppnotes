class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
         int n=items.size();
        int ans=0;
        while(n--){
            if(ruleKey=="type" && items[n][0]==ruleValue){
                ans++;
            }
            if(ruleKey=="color" && items[n][1]==ruleValue){
                ans++;
            }
            if(ruleKey=="name" && items[n][2]==ruleValue){
                ans++;
            }
        }
        return ans;
   
    };
};
