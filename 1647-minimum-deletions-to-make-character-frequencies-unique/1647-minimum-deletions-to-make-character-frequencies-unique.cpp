class Solution {
public:
    int minDeletions(string s) {
        vector<int> vec(26); 
        
        for(auto element : s){ 
            vec[element - 'a']++; 
        }
        
  
        sort(vec.begin(),vec.end(), greater<int>());
        
       
        int max_allowed_freq = vec[0];
        int ans=0;
        
        for(auto freq : vec) {
            if(freq > max_allowed_freq) 
            {
                if(max_allowed_freq>0)
                    ans+=(freq-max_allowed_freq); 
                else
                    ans+=freq; 
            }
            max_allowed_freq=min(max_allowed_freq-1,freq-1);
        }
        return ans;
    }
};