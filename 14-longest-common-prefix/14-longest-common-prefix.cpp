class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string res="";
        int sz=INT_MAX;
        for(auto i:strs){
            int a=i.size();
            sz=min(sz,a);
        }
        
        
        for(int i=0;i<sz;i++){
            char chk=strs[0][i];
            for(auto j:strs)
            {
                if(j[i]!=chk){
                    int a=res.size();
                    if(a==0)
                        return "";
                    else{
                        return res;
                    }
                }
                
            }
            res+=strs[0][i];
        }
        
        return res;
    }
};