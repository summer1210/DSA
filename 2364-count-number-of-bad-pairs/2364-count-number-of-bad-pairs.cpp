typedef long long ll;
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<ll,ll> umap;
        ll count=0;
        for(ll i=0;i<nums.size();i++){
            
            count+=i-umap[i-nums[i]]++;
        }
        return count;
    }
};