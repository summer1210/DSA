class Solution {
public:
    
    
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0, sum = neededTime[0], maxi = neededTime[0];
        int n = neededTime.size();
        for(int i=1;i<n;i++){
            if(colors[i] != colors[i-1]){
                ans += sum-maxi;
                sum=0;
                maxi=0;
            }
            sum += neededTime[i];
            maxi = max(maxi,neededTime[i]);
        }
        ans += sum-maxi; 
        return ans;
    }
};