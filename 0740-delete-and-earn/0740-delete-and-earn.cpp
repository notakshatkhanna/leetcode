class Solution {
public:
    int solve(int ind, vector<int>& nums, unordered_map<int, int>& mp, vector<int>& dp){
        if(ind >= nums.size())    return 0;
        if(dp[ind]!=-1) return dp[ind];
        int pick = (nums[ind]*mp[nums[ind]]) + solve(upper_bound(nums.begin(), nums.end(), nums[ind]+1)-nums.begin(), nums, mp, dp);
        int not_pick = solve(ind+1, nums, mp, dp);
        return dp[ind] = max(pick, not_pick);
    }
    
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> mp;
        vector<int> dp(nums.size()+1, -1);
        for(auto& it: nums) mp[it]++;
        return solve(0, nums, mp, dp);
    }
};