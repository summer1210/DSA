class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        if(pairs.size()==1)
            return 1;
        sort(pairs.begin(),pairs.end());
        int left=0,right=1,count=0;
        
        while(right<pairs.size()){
            if(pairs[left][1]<pairs[right][0])
            {
                left=right;
                right++;
                
            }else if(pairs[left][1]<pairs[right][1]){
                right++;
                count++;
            }else{
                
                left=right;
                right++;
                count++;
            }
        }
        
        return pairs.size()-count;
        
    }
};