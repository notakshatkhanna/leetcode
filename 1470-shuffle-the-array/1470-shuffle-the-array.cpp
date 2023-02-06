class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> sol;
        for(int i=0;i<n;i++){
            sol.push_back(nums[i]);
            sol.push_back(nums[n+i]);
        }
        return sol;
    }
};