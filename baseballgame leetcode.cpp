class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v;
        int n = -1;
        for(int i= 0; i< operations.size(); ++i){
            
            if(operations[i] == "+"){
             v.push_back(v[n] + v[n-1]);
               ++n;
            }
            else if(operations[i] == "D"){
              v.push_back(v[n] * 2);
                ++n;
            }
            else if(operations[i] == "C"){
             v.pop_back();
                --n;
            }
              else{
                 v.push_back(stoi(operations[i]));
                 ++n;
            }
        }
        
       return accumulate(v.begin(),v.end(),0);
    }
};
