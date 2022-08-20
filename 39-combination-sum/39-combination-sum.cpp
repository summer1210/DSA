class Solution {
public:
    vector<vector<int>> res;
    set<vector<int>> s;
    void fun(vector<int>temp,vector<int> candidates,int target,int i){
        if(target<0||i>=candidates.size())
            return;
        if(target==0)
          if(s.find(temp)==s.end())
          { s.insert(temp);
              res.push_back(temp);
          }
        
        temp.push_back(candidates[i]);
        fun(temp,candidates,target-candidates[i],i);
        temp.pop_back();
        fun(temp,candidates,target,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        fun({},candidates,target,0);
        return res;
    }
};