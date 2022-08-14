typedef long long ll;
class Solution {
public:
    long long taskSchedulerII(vector<int>& task, int space) {
        
        unordered_map<ll,ll> umap;
        ll day=0;
        
        for(ll i=0;i<task.size(); ){
            
            if(umap.count(task[i])&&day-umap[task[i]]<=space)
                day=umap[task[i]]+space+1;
            umap[task[i]]=day;
            day++;
            
            i++;
            
        }
       return day; 
    }
};